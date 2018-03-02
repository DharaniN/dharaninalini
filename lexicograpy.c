#include<stdio.h>
#include<string.h>
main()
 {
 char str[100][200],temp[200];
 int i=0,j=0,a;
 printf("Enter the number of items:");
 scanf("%d",&a);
 printf("Enter the items:");
 while(i<a)
 scanf("%s",str[i++]);
 for(i=1;i<n;i++)
  {
  for(j=1;j<=a-i;j++)
   {
   if(strcmp(str[j-1],str[j])>0)
    {
    strcpy(temp,str[j-1]); 
    strcpy(str[j-1],str[j]);
    strcpy(str[j],temp);
    }
   }
  }
 printf(" Sorted Items:");
 for(i=0;i<a;i++)
 printf(" %s",str[i]);
 }



