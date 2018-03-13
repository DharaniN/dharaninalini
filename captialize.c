#include<stdio.h>
#include<conio.h>
void main()
{
	char d[30];
	int i,n;
	clrscr();
	printf("Enter the String:");
	scanf("%[^\n]s",d);
	n=strlen(d);
	d[0]=toupper(d[0]);
	for(i=0;i<n;i++)
	{
		if(d[i]==' ')
		{
			d[i+1]=toupper(d[i+1]);
		}
	}
	printf("\n%s",d);
	getch();
}
