#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int pacmanx, int pacmany);
void erase(int pacmanx, int pacmany);
char getCharAtxy(short int pacmanx,short int pacmany);
void printp(int pacmanx, int pacmany);

main()
{
    int pacmanx = 4;
    int pacmany = 4;
    bool gamerunning = true;
    system("cls");
    printmaze();
    printp(pacmanx, pacmany);
    while (gamerunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(pacmanx - 1, pacmany);
            if (nextlocation == ' ')
            {
                erase(pacmanx, pacmany);
                pacmanx = pacmanx - 1;
                printp(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(pacmanx + 1, pacmany);
            if (nextlocation == ' ')
            {
                erase(pacmanx, pacmany);
                pacmanx = pacmanx + 1;
                printp(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(pacmanx, pacmany - 1);

            if (nextlocation == ' ')
            {
                erase(pacmanx, pacmany);
                pacmany = pacmany - 1;
                printp(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(pacmanx, pacmany + 1);

            if (nextlocation == ' ')
            {
                erase(pacmanx, pacmany);
                pacmany = pacmany + 1;
                printp(pacmanx, pacmany);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gamerunning = false;
        }
        Sleep(200);
    }
}
void gotoxy(int pacmanx, int pacmany)
{
    COORD coordinates;
    coordinates.X = pacmanx;
    coordinates.Y = pacmany;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze(int x, int y)
{

    cout << "*****************************" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*                           *" << endl;
    cout << "*****************************" << endl;
}
char getCharAtxy(short int pacmanx,short int pacmany)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x , y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int pacmanx, int pacmany)
{
    gotoxy(pacmanx, pacmany);
    cout << " ";
}
void printp(int pacmanx, int pacmany)
{
    gotoxy(pacmanx, pacmany);
    cout << "P";
}