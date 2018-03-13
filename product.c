#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    long product=1l;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        product=product*(n%10);
        n=n/10;
    }
    printf("The product of digits is =%ld",product);
    getch();
}
