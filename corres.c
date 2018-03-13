#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    clrscr();
    printf("Enter the number");
    scanf("%d",&num);
    printf("Corresponding character of %d is:%c",num,64+num);
    getch();
}
