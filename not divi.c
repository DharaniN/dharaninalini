#include<stdio.h>
#include<conio.h>
void main()
{
int num1;
clrscr();
printf("\n Enter the number:");
scanf("%d",&num1);
while(num1%2==0)
{
printf("%d",(num1/2));
num1=num1/2;
getch();
}
}
