#include<process.h>
#include<graphics.h>
#include<conio.h>
#include <iostream.h>
#include<dos.h>
#include <string.h>
#include <math.h>
#define PI 3.14159265
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 float xp,yp;
 float t[4];
 int a[4][4];
 int x[4];
 int y[4];
 x[0]=100;
 x[1]=120;
 x[2]=150;
 x[3]=150;
 y[0]=150;
 y[1]=100;
 y[2]=100;
 y[3]=150;
 a[0][0]=1;
 a[0][1]=0;
 a[0][2]=0;
 a[0][3]=0;
 a[1][0]=-3;
 a[1][1]=3;
 a[1][2]=0;
 a[1][3]=0;
 a[2][0]=3;
 a[2][1]=-6;
 a[2][2]=3;
 a[2][3]=0;
 a[3][0]=-1;
 a[3][1]=3;
 a[3][2]=-3;
 a[3][3]=1;
 float temp[4];
 for(float i=0;i<=1;i+=0.01)
 {
   t[0]=1;
   t[1]=i;
   t[2]=i*i;
   t[3]=i*i*i;
   for(int ik=0;ik<4;ik++)
   {
    temp[ik]=0;
    for(int jk=0;jk<4;jk++)
    {
     temp[ik]+=t[jk]*a[jk][ik];
    }
   }
   xp=0;
   for(int kk=0;kk<4;kk++)
   {
     xp+=temp[kk]*x[kk];
   }
   yp=0;
   for(kk=0;kk<4;kk++)
   {
     yp+=temp[kk]*y[kk];
   }
  putpixel(xp,yp,WHITE);
 }
 x[0]=100;
 x[1]=120;
 x[2]=110;
 x[3]=100;
 y[0]=150;
 y[1]=175;
 y[2]=185;
 y[3]=200;
 for(i=0;i<=1;i+=0.01)
 {
   t[0]=1;
   t[1]=i;
   t[2]=i*i;
   t[3]=i*i*i;
   for(int ik=0;ik<4;ik++)
   {
    temp[ik]=0;
    for(int jk=0;jk<4;jk++)
    {
     temp[ik]+=t[jk]*a[jk][ik];
    }
   }
   xp=0;
   for(int kk=0;kk<4;kk++)
   {
     xp+=temp[kk]*x[kk];
   }
   yp=0;
   for(kk=0;kk<4;kk++)
   {
     yp+=temp[kk]*y[kk];
   }
  putpixel(xp,yp,WHITE);
 }
 x[0]=150;
 x[1]=130;
 x[2]=140;
 x[3]=150;
 y[0]=150;
 y[1]=175;
 y[2]=185;
 y[3]=200;
 for(i=0;i<=1;i+=0.01)
 {
   t[0]=1;
   t[1]=i;
   t[2]=i*i;
   t[3]=i*i*i;
   for(int ik=0;ik<4;ik++)
   {
    temp[ik]=0;
    for(int jk=0;jk<4;jk++)
    {
     temp[ik]+=t[jk]*a[jk][ik];
    }
   }
   xp=0;
   for(int kk=0;kk<4;kk++)
   {
     xp+=temp[kk]*x[kk];
   }
   yp=0;
   for(kk=0;kk<4;kk++)
   {
     yp+=temp[kk]*y[kk];
   }
  putpixel(xp,yp,WHITE);
 }
 x[0]=100;
 x[1]=80;
 x[2]=90;
 x[3]=125;
 y[0]=200;
 y[1]=230;
 y[2]=250;
 y[3]=300;
 for(i=0;i<=1;i+=0.01)
 {
   t[0]=1;
   t[1]=i;
   t[2]=i*i;
   t[3]=i*i*i;
   for(int ik=0;ik<4;ik++)
   {
    temp[ik]=0;
    for(int jk=0;jk<4;jk++)
    {
     temp[ik]+=t[jk]*a[jk][ik];
    }
   }
   xp=0;
   for(int kk=0;kk<4;kk++)
   {
     xp+=temp[kk]*x[kk];
   }
   yp=0;
   for(kk=0;kk<4;kk++)
   {
     yp+=temp[kk]*y[kk];
   }
  putpixel(xp,yp,WHITE);
 }
 x[0]=150;
 x[1]=170;
 x[2]=160;
 x[3]=125;
 y[0]=200;
 y[1]=230;
 y[2]=250;
 y[3]=300;
 for(i=0;i<=1;i+=0.01)
 {
   t[0]=1;
   t[1]=i;
   t[2]=i*i;
   t[3]=i*i*i;
   for(int ik=0;ik<4;ik++)
   {
    temp[ik]=0;
    for(int jk=0;jk<4;jk++)
    {
     temp[ik]+=t[jk]*a[jk][ik];
    }
   }
   xp=0;
   for(int kk=0;kk<4;kk++)
   {
     xp+=temp[kk]*x[kk];
   }
   yp=0;
   for(kk=0;kk<4;kk++)
   {
     yp+=temp[kk]*y[kk];
   }
  putpixel(xp,yp,WHITE);
 }
 getch();
}
