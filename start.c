#include <stdio.h>
#include <windows.h>


/*void cursor(int x,int y)
{
   COORD pos={x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}*/

/*void colora(int i)
{

 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);

}*/


Start()
{
  system("cls"); colorb(15); 
  printf("              --------------------------------------------------   \n");
  colorb(9);
  printf("                ////////////////////////////////////////////////    \n");
  colorb(3);
  printf("                      CYX     GALAXYWING      COMPILER      \n");
  colorb(9);
  printf("                ///////////////////////////////////////////////    \n");
  colorb(15);
  printf("                  ÎÄ¼þ(f)             ±£´æ(s)           É¾³ý(d) \n");
  printf("              ----------------------------------------------------  \n");
 colorb(16*2);
 cursor(15,7);
 printf(               "                                                        \n");
 cursor(15,8);
 colorb(15);                                                    
 return 0;

}
