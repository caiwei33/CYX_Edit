#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
       
main()
{
  FILE *fp;
   int i,j=0;
   static char b[50][50];

   CYX(); Start();
   if(!(fp=fopen("a.txt","w")))
  {
    printf("cant't write a.txt");
    Sleep(3000); 
    exit(0);
  }  

for(i=0;b[j][i]=getchar();i++)
{ 

   if(b[j][i]!='@')
    fprintf(fp,"%c",b[j][i]);
  

   if(b[j][i]=='\n') 
      {
         
         b[j][i+1]='\0';
         pd(&b[0][0],j,i);
         j++;
         i=0;
         
      }

   if(b[j][i]=='@') break;

}



  fclose(fp);

   return 0;
}

    