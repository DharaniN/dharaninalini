#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    clrscr();
    printf("Enter the number");
    scanf("%d",&number);
    printf("Corresponding character of %d is:%c",number,64+number);
    getch();
}
