#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int WIDE = 30;
const int HEIGHT = 30;

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
    int x = 0;
    int y = 0;
};

struct snake snakeHead;
struct food apple;
int len = 1;

bool IsEat() {
    if (snakeHead.x == apple.x && snakeHead.y == apple.y) {
        return true;
    } else {
        return false;
    }
}

bool IsSnake(int x, int y) {
    struct snake* tempHead = &snakeHead;
    while (tempHead != NULL) {
        if (x == tempHead->x && y == tempHead->y) return true;
        tempHead = tempHead->next;
    }
    return false;
}

void BodyAdd() {
    struct snake* tempHead = &snakeHead;
    while (tempHead->next != NULL) {
        tempHead = tempHead->next;
    }
    struct snake* newBody = (struct snake*) malloc(sizeof(struct snake));
    newBody->x = tempHead->x;
    newBody->y = tempHead->y;
    ++len;
}

void SnakeInit() {
    struct snake* tempHead = &snakeHead;
    struct snake* tempBodyA;
    struct snake* tempBodyB;

    while (tempHead->next != NULL && tempHead->next->next != NULL) {
        tempBodyA->direction = tempHead->next->direction;
        tempHead->next->direction = tempHead->direction;
        tempHead = tempHead->next;
        tempBodyB->direction = tempHead->next->direction;
        tempHead->next->direction = tempBodyA->direction;
    }

    tempHead = &snakeHead;
    while (tempHead != NULL) {
        switch (tempHead->direction) {
            case UP:
                if (tempHead->y > 1) tempHead->y -= 1;
                break;

            case DOWN:
                if (tempHead->y < HEIGHT - 2) tempHead->y += 1;
                break;

            case LEFT:
                if (tempHead->x > 1) tempHead->x -= 1;
                break;

            case RIGHT:
                if (tempHead->x < WIDE - 2) tempHead->x += 1;
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
    return false;
}

void GetDirection() {
    for (int sec = 0; sec < DELAY; sec++) {
        if (GetKeyState(VK_UP) < 0) snakeHead.direction = UP;
        if (GetKeyState(VK_DOWN) < 0) snakeHead.direction = DOWN;
        if (GetKeyState(VK_LEFT) < 0) snakeHead.direction = LEFT;
        if (GetKeyState(VK_RIGHT) < 0) snakeHead.direction = RIGHT;
        Sleep(1);
    }
}

bool PrintGame() {
    while (1) {
        // printf("%d %d\n", snakeHead.x, snakeHead.y);
        for (int mapY = 0; mapY < HEIGHT; mapY++) {
            for (int mapX = 0; mapX < WIDE; mapX++) {
                if (mapY == 0 || mapY == HEIGHT - 1)
                    printf("¡õ");
                else if (mapX == 0 || mapX == HEIGHT - 1)
                    printf("¡õ");
                else if (IsSnake(mapX, mapY))
                    printf("¡ö");
                else
                    printf("  ");
            }
            printf("\n");
        }
        if (IsEnd()) {
            printf("ÓÎÏ·½áÊø£¡\n");
            return 1;
        }
        if (IsEat()) BodyAdd();
        SnakeInit();
        GetDirection();
        system("cls");
    }
}

int main() {
    PrintGame();
    system("pause");
    return 0;
}