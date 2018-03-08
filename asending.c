#include <stdio.h>
void main()
{
	int s[100],i,j,n,temp,b[100],count=0;
	printf("\nEnter the number of value");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(s[i]>s[j])
		 {
		 	temp=s[i];
		 	s[i]=s[j];
		 	s[j]=temp;
		 }
		}
	}
		for(i=0,j=n-1;i<n&&j>=0;i++,j--)
		{
			if(s[i]!=b[i])
			{
				count++;
			}
		}
		printf("\nThere are %d changes ",count);
	
}
