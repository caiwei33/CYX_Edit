#include <stdio.h>
#include <windows.h>


void sed()
{
   static int q=15*16,z=1;
      q-=16*7;
    if(z==-1) {  q=15*16; }
        z*=-1;  
    colorb(q);
   
}

void cyx_1()
{

   int i=8,j=8;
  
   for(;i<=13;i++)
     {
       cursor(16,i); 
       putch('$');
     }

    for(i=17;i<=20;i++)
       {
          cursor(i,8);
           
            putch('$');
          cursor(i,13);
            putch('$');
        }

    for(i=32;i<=34;i++)
        { cursor(i,j);
          putch('$');
           j++;
         }
      for(i=11;i<=13;i++)
         {
            cursor(35,i);
              putch('$');
            cursor(36,i);
              putch('$');
         }

          
      for(i=36,j=11;i<=39;i++)
         {
           cursor(i,j);
            putch('$');
              j--;
         }
       
     for(i=50,j=8;i<=55;i++)
       {
         cursor(i,j);
         putch('$');
            j++;
        }
       
     for(i=55,j=8;i>=50;i--)
      {cursor(i,j); putch('$'); j++;}
   Sleep(1000);
   system("color 04"); 
}
     
CYX()
{
    int i,j=3;
    int a,b=20;
    int c,d=20;
    int e,f=3;
    int g,h=4;
    int l,m=19;
    int r[80];

      r[2]=20; r[3]=3;
      r[6]=18; r[7]=5;
      r[10]=3; r[11]=20;
      r[14]=6; r[15]=17;
      r[18]=20; r[19]=3;
      r[22]=7; r[23]=16;
      r[26]=20; r[27]=3;
      r[30]=8; r[31]=15;
      r[34]=20; r[35]=3;
      r[38]=9; r[39]=14;
      r[42]=20; r[43]=3;
      r[46]=10; r[47]=13;
      r[50]=20; r[51]=3;
      r[54]=11; r[55]=12;
      r[58]=20; r[59]=3;
      r[62]=12; r[63]=11;
      r[66]=20; r[67]=3;
      r[70]=13; r[71]=10;
      r[74]=20; r[75]=3;
      
//cursor(20,3);   //左上
//  putch(' ');
// cursor(54,3);   //右上
//putch(' ');
//cursor(20,20);   //左下
//putch(' ');
//cursor(54,20);   //右下
//putch(' '); 

SetConsoleTitle(" CYX GALAXYWING COMPILER  ");

 sed();
  for(i=54,a=20;i>=38||a<=38;i-=2,a+=2)
  {
    
     cursor(i,j);
    if(j<=11) j++;
      putch(' ');
     cursor(a,b);

    if(b>=11) b--;
      putch(' ');
       Sleep(100);
  }
 
  sed();    
   for(c=21,e=53;c<=53||e>=20;c+=2,e-=2)
   {
    
      cursor(c,d);
    if(d>=3) d--;
      putch(' ');
    
      cursor(e,f);
    if(f<=20) f++;
      putch(' ');
    Sleep(100);
   }

sed();
   for(g=54,l=20;g>=21||l<=53;g-=2,l+=2)
   {
      cursor(g,h);
    if(h<20) h++;
      putch(' ');
    
      cursor(l,m);
    if(m>3) m--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[0]=23,r[1]=51;r[0]<=54||r[1]>=20;r[0]+=2,r[1]-=2)
   {
    
      cursor(r[0],r[2]);
    if(r[2]>=5) r[2]--;
      putch(' ');
    
      cursor(r[1],r[3]);
    if(r[3]<=19) r[3]++;
      putch(' ');
    Sleep(100);
   }
 sed();
   for(r[4]=20,r[5]=54;r[4]<=50||r[5]>=24;r[5]-=2,r[4]+=2)
   {
      cursor(r[4],r[6]);
    if(r[6]>=3) r[6]--;
      putch(' ');
    
      cursor(r[5],r[7]);
    if(r[7]<=20) r[7]++;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[8]=49,r[9]=25;r[9]<=54||r[8]>=20;r[9]+=2,r[8]-=2)
   {
    
      cursor(r[9],r[11]);
    if(r[11]>=5) r[11]--;
      putch(' ');
    
      cursor(r[8],r[10]);
    if(r[10]<=17) r[10]++;
      putch(' ');
    Sleep(100);
   }
sed();
   for(r[12]=54,r[13]=20;r[13]<=48||r[12]>=27;r[12]-=2,r[13]+=2)
   {
      cursor(r[12],r[14]);
    if(r[14]<=20) r[14]++;
      putch(' ');
    
      cursor(r[13],r[15]);
    if(r[15]>=3) r[15]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[17]=47,r[16]=27;r[16]<=54||r[17]>=20;r[16]+=2,r[17]-=2)
   {
    
      cursor(r[16],r[18]);
    if(r[18]>=7) r[18]--;
      putch(' ');
    
      cursor(r[17],r[19]);
    if(r[19]<=15) r[19]++;
      putch(' ');
    Sleep(100);
   }
sed();
   for(r[20]=54,r[21]=20;r[21]<=46||r[20]>=28;r[20]-=2,r[21]+=2)
   {
      cursor(r[20],r[22]);
    if(r[22]<=20) r[22]++;
      putch(' ');
    
      cursor(r[21],r[23]);
    if(r[23]>=3) r[23]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[25]=45,r[24]=29;r[24]<=54||r[25]>=20;r[24]+=2,r[25]-=2)
   {
    
      cursor(r[24],r[26]);
    if(r[26]>=8) r[26]--;
      putch(' ');
    
      cursor(r[25],r[27]);
    if(r[27]<=15) r[27]++;
      putch(' ');
    Sleep(100);
   }  
sed();
   for(r[28]=54,r[29]=20;r[29]<=44||r[28]>=30;r[28]-=2,r[29]+=2)
   {
      cursor(r[28],r[30]);
    if(r[30]<=20) r[30]++;
      putch(' ');
    
      cursor(r[29],r[31]);
    if(r[31]>=3) r[31]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[33]=43,r[32]=31;r[32]<=54||r[33]>=20;r[32]+=2,r[33]-=2)
   {
    
      cursor(r[32],r[34]);
    if(r[34]>=8) r[34]--;
      putch(' ');
    
      cursor(r[33],r[35]);
    if(r[35]<=15) r[35]++;
      putch(' ');
    Sleep(100);
   }
sed();
   for(r[36]=54,r[37]=20;r[37]<=42||r[36]>=32;r[36]-=2,r[37]+=2)
   {
      cursor(r[36],r[38]);
    if(r[38]<=20) r[38]++;
      putch(' ');
    
      cursor(r[37],r[39]);
    if(r[39]>=3) r[39]--;
      putch(' ');
    
    Sleep(100);
   }

sed();
   for(r[41]=41,r[40]=33;r[40]<=54||r[41]>=20;r[40]+=2,r[41]-=2)
   {
    
      cursor(r[40],r[42]);
    if(r[42]>=8) r[42]--;
      putch(' ');
    
      cursor(r[41],r[43]);
    if(r[43]<=15) r[43]++;
      putch(' ');
    Sleep(100);
   }
sed();
   for(r[44]=54,r[45]=20;r[45]<=40||r[44]>=34;r[44]-=2,r[45]+=2)
   {
      cursor(r[44],r[46]);
    if(r[46]<=20) r[46]++;
      putch(' ');
    
      cursor(r[45],r[47]);
    if(r[47]>=3) r[47]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[49]=39,r[48]=35;r[48]<=54||r[49]>=20;r[48]+=2,r[49]-=2)
   {
    
      cursor(r[48],r[50]);
    if(r[50]>=8) r[50]--;
      putch(' ');
    
      cursor(r[49],r[51]);
    if(r[51]<=15) r[51]++;
      putch(' ');
    Sleep(100);
   }

sed();
   for(r[52]=54,r[53]=20;r[53]<=38||r[52]>=36;r[52]-=2,r[53]+=2)
   {
      cursor(r[52],r[54]);
    if(r[54]<=20) r[54]++;
      putch(' ');
    
      cursor(r[53],r[55]);
    if(r[55]>=3) r[55]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[56]=37,r[57]=37;r[56]<=54||r[57]>=20;r[56]+=2,r[57]-=2)
   {
    
      cursor(r[56],r[58]);
    if(r[58]>=8) r[58]--;
      putch(' ');
    
      cursor(r[57],r[59]);
    if(r[59]<=15) r[59]++;
      putch(' ');
    Sleep(100);
   }
sed();
   for(r[60]=54,r[61]=20;r[61]<=36||r[60]>=38;r[60]-=2,r[61]+=2)
   {
      cursor(r[60],r[62]);
    if(r[62]<=20) r[62]++;
      putch(' ');
    
      cursor(r[61],r[63]);
    if(r[63]>=3) r[63]--;
      putch(' ');
    
    Sleep(100);
   }
sed();
   for(r[64]=35,r[65]=39;r[64]<=54||r[65]>=20;r[64]+=2,r[65]-=2)
   {
    
      cursor(r[64],r[66]);
    if(r[66]>=8) r[66]--;
      putch(' ');
    
      cursor(r[65],r[67]);
    if(r[67]<=15) r[67]++;
      putch(' ');
    Sleep(100);
   }
  sed();
      cursor(20,3);   //左上
    printf(" ");

      cursor(54,20);   //右下
     printf(" ");
      e=8; f=13;g=1;
   for(i=20,a=54;i<=35||a>=39;i++,a--)
     { 
     for(j=3,b=20;j<=e||b>=f;j++,b--)
     {
       cursor(i,j); 
         putch(' ');
        cursor(a,b);
         putch(' ');
       Sleep(200);
         
      }
        sed();
        g*=-1;
      if(g==1)
     { e--; f++; }
     }


     for(i=20;i<=54;i++)
       for(j=3;j<=20;j++)
         {
            colorb(15*16);
             cursor(i,j);
              putch(' ');
          }
  Sleep(500);
  system("color 0f");
  cyx_1();
  



/*  没有写完代码,如果有时间可以优化接上
  
   sed();
   for(r[68]=54,r[69]=20;r[69]<=34,r[68]>=40;r[68]-=2,r[69]+=2)
   {
      cursor(r[68],r[70]);
    if(r[70]<=20) r[70]++;
      putch(' ');
    
      cursor(r[69],r[71]);
    if(r[71]>=3) r[71]--;
      putch(' ');
    
    Sleep(100);
   }

sed();
   for(r[72]=33,r[73]=41;r[72]<=54,r[73]>=20;r[72]+=2,r[73]-=2)
   {
    
      cursor(r[73],r[75]);
    if(r[75]>=8) r[75]--;
      putch(' ');
    
      cursor(r[72],r[74]);
    if(r[74]<=15) r[74]++;
      putch(' ');
    Sleep(100);
   }*/





/*   此为没有写完的代码,虽然是废弃可不是代表没有半点用处
     
      希望有人能补全
    
      r[33]=43; r[32]=31;
        r[20]=42; r[21]=32;
        r[24]=9; r[25]=14;
 
     for(;r[33]>20;)
     {
        

        if(u==1)
         {   r[36]=20;r[37]=3;
             r[33]-=2;  r[32]+=2;
             r[38]=r[33]; r[39]=r[32];
               sed();
                for(;r[39]<=54,r[38]>=20;r[38]-=2,r[39]+=2)
                   {
                         
    
                          cursor(r[38],r[36]);
                         if(r[36]>=8) r[36]--;
                            putch(' ');
    
                         cursor(r[39],r[37]);
                        if(r[37]<=15) r[37]++;
                        putch(' ');
                            Sleep(100);
                   }
                u=0;
           }

        if(u==0)
          {  r[26]=54;r[27]=20;
              r[20]-=2; r[21]+=2;
             r[24]+=1;  r[25]-=1; r[28]=r[24]; r[29]=r[25]; 
                sed();
               for(;r[26]>=r[20],r[27]<=r[21];r[26]-=2,r[27]+=2)
              {
                   cursor(r[26],r[28]);
                  if(r[28]<=20) r[28]++;
                    putch(' ');
    
                cursor(r[27],r[29]);
               if(r[29]>=3) r[29]--;
                 putch(' ');
    
                 Sleep(100);
               }
            u=1;
           }
     }  */
   
   Sleep(3000);
   return 0;
}
