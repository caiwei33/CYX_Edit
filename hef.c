#include <windows.h>
#include <stdio.h>

void cursor(int x,int y)
{
   COORD pos={x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void colorb(int i)
{

 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);

} 