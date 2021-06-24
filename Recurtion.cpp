#include <iostream>
#include "Func.h"

using namespace std;

#include <windows.h>
HWND hwnd = GetConsoleWindow();
HDC hdc = GetDC(hwnd);
const int moveX = 10, moveY = 10;

#pragma region Fibonachi
long fib_cycle(short iter) {
    short cpos = 1;
    long result = 1, ppos1 = 1;

    while (cpos++ < iter) {
        long tempVault = ppos1;
        ppos1 = result;
        result += tempVault;
    }

    return result;
}

long fib_rec(int pos) {
    return (pos <= 1) ? 1 : fib_rec(pos - 1) + fib_rec(pos - 2);
}
#pragma endregion

#pragma region FractalMinkovskogo
void moveRight(float& x, float& y, int& reachX, int& reachY, int stage);
void moveDown(float& x, float& y, int& reachX, int& reachY, int stage);
void moveLeft(float& x, float& y, int& reachX, int& reachY, int stage);
void moveUp(float& x, float& y, int& reachX, int& reachY, int stage);


void moveRight(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveRight(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX += moveX;
        for (x; x < reachX; x += 0.05)
            SetPixel(hdc, x, y, RGB(17, 255, 73));
    }   
}


void moveDown(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveDown(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachY += moveY;
        for (y; y < reachY; y += 0.05)
            SetPixel(hdc, x, y, RGB(255, 17, 17));
    }
}

void moveLeft(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveDown(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX -= moveX;
        for (x; x > reachX; x -= 0.05)
            SetPixel(hdc, x, y, RGB(25, 17, 255));
    }   
}


void moveUp(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveUp(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveLeft(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
        moveRight(x, y, reachX, reachY, stage - 1);
        moveUp(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachY -= moveY;
        for (y; y > reachY; y -= 0.05)
            SetPixel(hdc, x, y, RGB(232, 255, 17));
    }
}

#pragma endregion

#pragma region Koh

void moveLeft_live(float& x, float& y, int& reachX, int& reachY, int stage);
void moveRigthDown_live(float& x, float& y, int& reachX, int& reachY, int stage);
void moveLeftUp_live(float& x, float& y, int& reachX, int& reachY, int stage);
void moveLeftDown_live(float& x, float& y, int& reachX, int& reachY, int stage);
void moveRigth_live(float& x, float& y, int& reachX, int& reachY, int stage);
void moveRigthUp_live(float& x, float& y, int& reachX, int& reachY, int stage);


void moveLeft_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    reachX -= moveX;
    for (x; x > reachX; x -= 0.05)
        SetPixel(hdc, x, y, RGB(0, 145, 255));
}

void moveRigthDown_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveRigthDown_live(x, y, reachX, reachY, stage - 1);
        moveRigth_live(x, y, reachX, reachY, stage - 1);
        moveLeftDown_live(x, y, reachX, reachY, stage - 1);
        moveRigthDown_live(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX += moveX;
        reachY += moveY;
        for (x, y; x < reachX; x += 0.05, y += 0.05)
            SetPixel(hdc, x, y, RGB(0, 255, 128));
    }
}

void moveLeftUp_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveLeftUp_live(x, y, reachX, reachY, stage - 1);
        moveLeft_live(x, y, reachX, reachY, stage - 1);
        moveRigthUp_live(x, y, reachX, reachY, stage - 1);
        moveLeftUp_live(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX -= moveX;
        reachY -= moveY;
        for (x, y; x > reachX; x -= 0.05, y -= 0.05)
            SetPixel(hdc, x, y, RGB(9, 255, 0));
    }
}

void moveLeftDown_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveLeftDown_live(x, y, reachX, reachY, stage - 1);
        moveRigthDown_live(x, y, reachX, reachY, stage - 1);
        moveLeft_live(x, y, reachX, reachY, stage - 1);
        moveLeftDown_live(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX -= moveX;
        reachY += moveY;
        for (x, y; x > reachX; x -= 0.05, y += 0.05)
            SetPixel(hdc, x, y, RGB(239, 255, 0));
    }
}

void moveRigth_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveRigth_live(x, y, reachX, reachY, stage - 1);
        moveRigthUp_live(x, y, reachX, reachY, stage - 1);
        moveRigthDown_live(x, y, reachX, reachY, stage - 1);
        moveRigth_live(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX += moveX;
        for (x; x < reachX; x += 0.05)
            SetPixel(hdc, x, y, RGB(17, 0, 255));
    }
}

void moveRigthUp_live(float& x, float& y, int& reachX, int& reachY, int stage)
{
    if (stage > 1) {
        moveRigthUp_live(x, y, reachX, reachY, stage - 1);
        moveLeftUp_live(x, y, reachX, reachY, stage - 1);
        moveRigth_live(x, y, reachX, reachY, stage - 1);
        moveRigthUp_live(x, y, reachX, reachY, stage - 1);
    }
    else {
        reachX += moveX;
        reachY -= moveY;
        for (x, y; x < reachX; x += 0.05, y -= 0.05)
            SetPixel(hdc, x, y, RGB(0, 255, 255));
    }
}
#pragma endregion


void FractHub() {
    cout << "¬ведите размерность от " << 1 << " до " << 3 << " : ";
    int test = func::InputHub(1, 3);
    system("cls");
    float x = 300, y = 300;
    int reachX = 300, reachY = 300;

    moveRight(x, y, reachX, reachY, test);
    moveDown(x, y, reachX, reachY, test);
    moveLeft(x, y, reachX, reachY, test);
    moveUp(x, y, reachX, reachY, test);
}

void KohHub() {
    cout << "¬ведите размерность от " << 1 << " до " << 4 << " : ";
    int test = func::InputHub(1, 4);
    system("cls");
    float x = 200, y = 400;
    int reachX = 200, reachY = 400;

    moveRigth_live(x, y, reachX, reachY, test);
    moveRigthUp_live(x, y, reachX, reachY, test);
    moveRigthDown_live(x, y, reachX, reachY, test);
    moveRigth_live(x, y, reachX, reachY, test);
}

void FibHub() {
    system("cls");
    for (int i = 0; i < 8; i++) {
        cout << "«начение фибб./цикл/   (" << i << ") = " << fib_cycle(i) << '\n';
        cout << "«начение фибб./рекурс/ (" << i << ") = " << fib_rec(i) << "\n\n";
    }
    system("pause");
}

int main() {
    setlocale(LC_ALL, "ru");
    
    cout << "¬ведите номер задачи (от 1 до 3): ";
	int labNum = func::InputHub(1, 3);

    switch (labNum) {
    case 1: FibHub(); break;
    case 2: FractHub(); break;
    case 3: KohHub(); break;
    }
}