#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

const int WIDE = 30;
const int HEIGHT = 30;
const int FRUIT_DELAY = 6;

const int UP = 80;
const int DOWN = 72;
const int LEFT = 75;
const int RIGHT = 77;
const int DELAY = 0.03 * 1000;

struct snake {
    int direction = UP;
    int x = WIDE / 2;
    int y = HEIGHT / 2;
    struct snake* next = NULL;
};

struct food {
    int x = WIDE / 3;
    int y = HEIGHT / 3;
};
struct snake snakeBodyC = {UP, WIDE / 2, HEIGHT / 2 - 3, NULL};
struct snake snakeBodyB = {UP, WIDE / 2, HEIGHT / 2 - 2, &snakeBodyC};
struct snake snakeBodyA = {UP, WIDE / 2, HEIGHT / 2 - 1, &snakeBodyB};
struct snake snakeHead = {UP, WIDE / 2, HEIGHT / 2, &snakeBodyA};

struct food apple;
static int counter = 0;
static int len = 1;

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
            apple.x = rand() % (WIDE - 3) + 1;
            apple.y = rand() % (HEIGHT - 3) + 1;
        } while (IsSnake(apple.x, apple.y));
    }
}

bool IsFruit(int x, int y) {
    if (x == apple.x && y == apple.y)
        return true;
    else
        return false;
}

void BodyAdd() {
    struct snake* tempHead = &snakeHead;
    while (tempHead->next != NULL) {
        tempHead = tempHead->next;
    }
    struct snake* newBody = (struct snake*) malloc(sizeof(struct snake));
    tempHead->next = newBody;
    newBody->x = tempHead->x;
    newBody->y = tempHead->y;
    ++len;
    apple.x = 0;
    apple.y = 0;
    counter = 0;
}

void SnakeInit() {
    struct snake* tempHead = &snakeHead;
    struct snake tempBodyA;
    struct snake tempBodyB;

    while () {
        //@todo: Add value passing for linkedList
    }
    
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
}
bool IsEnd() {
    struct snake* tempHead = snakeHead.next;
    while (tempHead != NULL) {
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
        if (GetKeyState(VK_UP) < 0 && snakeHead.direction!=DOWN)
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
    while (1) {
        printf("%d\n%d\n%d\n%d\n", apple.x, apple.y, counter, len);
        FruitInit(counter);
        for (int mapY = 0; mapY < HEIGHT; mapY++) {
            for (int mapX = 0; mapX < WIDE; mapX++) {
                if (mapY == 0 || mapY == HEIGHT - 1)
                    printf("¡õ");
                else if (mapX == 0 || mapX == HEIGHT - 1)
                    printf("¡õ");
                else if (IsSnake(mapX, mapY))
                    printf("¡ö");
                else if (counter == FRUIT_DELAY && IsFruit(mapX, mapY)) {
                    printf("¡ñ");
                } else
                    printf("  ");
            }
            printf("\n");
        }
        if (IsEnd()) {
            system("cls");
            printf("ÓÎÏ·½áÊø£¡\n");
            return 1;
        }
        if (IsEat()) BodyAdd();
        SnakeInit();
        GetDirection();
        system("cls");
        ++counter;
    }
}

int main() {
    PrintGame();
    system("pause");
    return 0;
}