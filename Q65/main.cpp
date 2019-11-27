#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

const int WIDE = 18;
const int HEIGHT = 18;
const int FRUIT_DELAY = 8;

const int UP = 80;
const int DOWN = 72;
const int LEFT = 75;
const int RIGHT = 77;
const int DELAY = 0.01 * 1000;

int lastDirection = UP;

struct snake {
    int direction = UP;
    int x = WIDE / 2;
    int y = HEIGHT / 2;
    struct snake* head = NULL;
    struct snake* next = NULL;
};

struct food {
    int x = 0;
    int y = 0;
};
struct snake snakeBodyB = {UP, WIDE / 2, HEIGHT / 2 + 2, NULL, NULL};
struct snake snakeBodyA = {UP, WIDE / 2, HEIGHT / 2 + 1, NULL, &snakeBodyB};
struct snake snakeHead = {UP, WIDE / 2, HEIGHT / 2, NULL, &snakeBodyA};

struct food apple;
static int counter = 0;
static int len = 3;
bool fruitSwitch = true;

bool IsEat() {
    if (snakeHead.x == apple.x && snakeHead.y == apple.y)
        return true;
    else
        return false;
}

bool IsSnake(int x, int y) {
    struct snake* tempHead = &snakeHead;
    while (tempHead != NULL) {
        if (x == tempHead->x && y == tempHead->y) return true;
        tempHead = tempHead->next;
    }
    return false;
}

void FruitInit(int tempCounter) {
    if (tempCounter == FRUIT_DELAY) {
        srand((unsigned int) time(NULL));
        do {
            apple.x = rand() % (WIDE - 2) + 1;
            apple.y = rand() % (HEIGHT - 2) + 1;
        } while (IsSnake(apple.x, apple.y));
        tempCounter = 0;
        fruitSwitch = true;
    }
    
}

bool IsFruit(int x, int y) {
    if (x == apple.x && y == apple.y)
        return true;
    else
        return false;
}

void BodyAdd() {
    fruitSwitch = false;
    struct snake* tempHead = &snakeHead;
    while (tempHead->next != NULL) {
        tempHead = tempHead->next;
    }
    struct snake* newBody = (struct snake*) malloc(sizeof(struct snake));
    tempHead->next = newBody;
    newBody->head = tempHead;
    newBody->x = tempHead->x;
    newBody->y = tempHead->y;
    newBody->direction = tempHead->direction;
    newBody->next = NULL;
    ++len;
    apple.x = 0;
    apple.y = 0;
    counter = 0;
    switch (newBody->direction) {
        case UP:
            newBody->y += 1;
            break;
        case DOWN:
            newBody->y -= 1;
            break;
        case LEFT:
            newBody->x += 1;
            break;
        case RIGHT:
            newBody->x -= 1;
            break;
    }
}

void SnakeInit() {
    struct snake* tempHead = &snakeHead;
    while (tempHead->next != NULL) {
        tempHead = tempHead->next;
    }
    while (tempHead->head != NULL) {
        tempHead->direction = tempHead->head->direction;
        tempHead = tempHead->head;
    }
    snakeHead.next->direction = lastDirection;
    tempHead = &snakeHead;
    while (tempHead != NULL) {
        switch (tempHead->direction) {
            case UP:
                if (tempHead->y > 0) tempHead->y -= 1;
                break;

            case DOWN:
                if (tempHead->y < HEIGHT - 1) tempHead->y += 1;
                break;

            case LEFT:
                if (tempHead->x > 0) tempHead->x -= 1;
                break;

            case RIGHT:
                if (tempHead->x < WIDE - 1) tempHead->x += 1;
                break;
            default:
                break;
        }
        tempHead = tempHead->next;
    }
    lastDirection = snakeHead.direction;
}
bool IsEnd() {
    struct snake* tempHead = snakeHead.next;
    while (tempHead->next != NULL) {
        if (tempHead->x == snakeHead.x && tempHead->y == snakeHead.y)
            return true;
        tempHead = tempHead->next;
    }
    if (snakeHead.x == 0 || snakeHead.x == WIDE - 1 || snakeHead.y == 0 ||
        snakeHead.y == HEIGHT - 1)
        return true;
    if (len == (30 - 2) * (30 - 2)) return true;
    return false;
}

void GetDirection() {
    for (int sec = 0; sec < DELAY; sec++) {
        if (GetKeyState(VK_UP) < 0 && snakeHead.direction != DOWN)
            snakeHead.direction = UP;
        if (GetKeyState(VK_DOWN) < 0 && snakeHead.direction != UP)
            snakeHead.direction = DOWN;
        if (GetKeyState(VK_LEFT) < 0 && snakeHead.direction != RIGHT)
            snakeHead.direction = LEFT;
        if (GetKeyState(VK_RIGHT) < 0 && snakeHead.direction != LEFT)
            snakeHead.direction = RIGHT;
        Sleep(1);
    }
}

bool PrintGame() {
    snakeBodyA.head = &snakeHead;
    snakeBodyB.head = &snakeBodyA;

    while (1) {
        FruitInit(counter);
        for (int mapY = 0; mapY < HEIGHT; mapY++) {
            printf("");
            for (int mapX = 0; mapX < WIDE; mapX++) {
                if (mapY == 0 || mapY == HEIGHT - 1)
                    printf("·");
                else if (mapX == 0 || mapX == HEIGHT - 1)
                    printf("·");
                else if (IsSnake(mapX, mapY))
                    printf("■");
                else if (fruitSwitch && IsFruit(mapX, mapY))
                    printf("○");
                else
                    printf("  ");
            }
            printf("\n");
        }

        if (IsEnd()) {
            system("cls");
            printf("游戏结束！\n");
            return 1;
        }
        if (IsEat()) {
            BodyAdd();
        }
        SnakeInit();
        GetDirection();
        printf("分数：%d", len - 3);
        system("cls");
        ++counter;
    }
}

int main() {
    PrintGame();
    system("pause");
    return 0;
}