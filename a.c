#include <stdio.h>
#include <windows.h>

main()
{
   int i,j;
for(i=1;i<=15;i++)
  for(j=16;j<=16*15;j+=16)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);

       printf("hello!    ");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),j);
       printf("      ");  
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
       printf("            ǰ��ɫ0x%x ����ɫ0x%x\n",i,j);
}
       getchar();
  
       return 0;
}



