#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define BLACK           0
#define DARK_BLUE       1
#define GREEN           2
#define TURQUOISE       3
#define DARK_RED        4
#define PURPLE          5
#define FOREST_GREEN    6
#define LIGHT_GRAY      7
#define GRAY            8
#define BLUE            9
#define LIGHT_GREEN    10
#define LIGHT_BLUE     11
#define RED            12
#define PINK           13
#define YELLOW         14
#define WHITE          15

int getx(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &window);
    return window.dwCursorPosition.X;
}

int gety(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &window);
    return window.dwCursorPosition.Y;
}

void setx(int x)
{
    COORD pos;
    pos.X = x;
    pos.Y = gety();
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void sety(int y)
{
    COORD pos;
    pos.X = getx();
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy(int x, int y)
{
    setx(x);
    sety(y);
}

void setcolor(unsigned short int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// fine della libreria conio.h

int main() {

    const char sfondo = '_';
    const char acquila =  'o';

    

    setcolor(DARK_RED);

    printf("_______________printf("");ooo_______________ooo______________\n");
    printf("___oo______o_ooooooooo_______ooooooooo_o______oo__\n");
    printf("___ooo_____oooooooooooo_____oooooooooooo____oooo__\n");
    printf("____ooooo_______ooooooo____oooooooo_______ooooo___\n");
    printf("______oooooooooo___ooooo___ooooo___oooooooooo_____\n");
    printf("___oo______ooooooo___ooooooooo___ooooooo______oo__\n");
    printf("____oooooooooooooo___ooooooooo__ooooooooooooooo___\n");
    printf("______oooo_oooooooo__ooooooooo__ooooooo__oooo_____\n");
    printf("___oooo___ooooooooooooooooooooooooooooooo___oooo__\n");
    printf("_____ooooo_ooooooooooooooooooooooooooooo_ooooo____\n");
    printf("__________ooooooooooooooooooooooooooooooo_________\n");
    printf("___ooooooo_ooooooooooooooooooooooooooooo_ooooooo__\n");
    printf("_____oo___ooooooooooooooooooooooooooooooo__oo_____\n");
    printf("___oo__oooo_ooooooooooooooooooooooooooo_ooo__oo___\n");
    printf("___oooooo__ooooooooooooooooooooooooooooo__ooooo___\n");
    printf("_________ooooooooooooooooooooooooooooooooo________\n");
    printf("___ooooooo__ooooooooooooooooooooooooooo_ooooooo___\n");
    printf("____ooooo__oo__oo_ooooooooooooooo_oo__oo__oooo____\n");
    printf("_________ooo__oo_oo_ooooooooooo_oo_oo__ooo________\n");
    printf("____ooooooo_ooo____ooooooooooooo_o__ooo_ooooooo___\n");
    printf("____ooooo____o___ooooo__ooo__ooooo___o____oooo____\n");
    printf("_______________oooooo__ooooo__oooooo______________\n");
    printf("______oooo____oooooo___ooooo___oooooo____oooo_____\n");
    printf("______oooo____oooooo___ooooo___oooooo____oooo_____\n");
    printf("___oooo__oooooo___o___ooooooo___o___oooooo__oooo__\n");
    printf("_______ooooo_ooo____ooooooooooo____oooo_oooo______\n");
    printf("______ooo_____oo__ooooooooooooooo__oo_____ooo_____\n");
    printf("_____oo______________ooooooooo______________oo____\n");
    printf("__________________oooo_ooooo_oooo_________________\n");
    printf("_____________________ooooooooo____________________\n");
    printf("____________________oo__ooo__oo___________________\n");
    printf("_______________________ooooo______________________\n");
    printf("________________________ooo_______________________\n");

    return 0;
}