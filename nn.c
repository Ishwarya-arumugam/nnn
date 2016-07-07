#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=0,a1=0;
clrscr();
for(i=0;i<15;i++)
{
a=a+i;
}
printf("\n%d",a);
for(j=15;j<45;j++)
{
if(j%2!=0)
{
a1=a1+j;
}
}
printf("\n%d",a1);
getch();
}
