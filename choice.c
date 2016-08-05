#include <stdio.h>
#include <windows.h>


void cursor_1(int i)
{
   cursor(17,i+1+8);
}

void cursor_2(int i)
{
   cursor(19,i+1+8);
}

void cursor_3(int i)
{
    cursor(21,i+1+8);
}

void pd(char c[][50],int i,int p)
{
     int j,d;   
   static int x[2],y[3],m=0;
   for(j=0;j<p;j++)
      {
                   

           switch(c[i][j])
          {

               case ';': if(x[0]==1||y[0]==1) cursor_3(i);
                              else cursor_1(i);
                             x[1]=1;
                              break;
               case '{': if(x[0]==1||y[0]==1) {cursor_3(i);}
                              else {cursor_1(i); m++;}         
                               y[1]=1; break;

               case 'i': if(c[i][j+1]=='f') 
                            {
                               cursor_2(i);
                                x[0]=1;
                            }
                               break;
               case 'f': if(c[i][j+1]=='o')
                            if(c[i][j+2]=='r')
                               {
                                 cursor_2(i);
                                 y[0]=1;
                                }
                                break;

               case '}': if(x[0]==1||y[0]==1) {cursor_3(i-1); putch(' '); cursor_2(i-1); putch('}'); cursor_1(i); x[0]=0; y[0]=0;}
                           else  m--;
                       if(m==0) { cursor_1(i-1); putch(' '); 
              cursor(15,i+1+8); putch('}'); }
                  cursor(17,i+1+8);
                           y[2]=1;
                            break;
               default: if(x[0]!=1&&x[1]!=1&&y[1]!=1&&y[0]!=1&&y[2]!=1) cursor(15,i+9);
          }
       }
                         
}
     

