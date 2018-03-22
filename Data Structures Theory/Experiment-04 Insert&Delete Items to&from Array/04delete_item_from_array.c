#include<stdio.h>
#include<conio.h>
void main()
{
		int a[25],i,j,temp,n,pos,item,k;
		printf("How many elements you have in the array?:");
		scanf("%d",&n);
		printf("Enter %d elements:\n",n);
		for(i=1;i<=n;i++)
		{
		 scanf("%d",&a[i]);
		}

printf("Enter the position from which you want to delete item:n");
scanf("%d",&pos);

item=a[pos];
n=n-1;

for(k=pos;k<=n;k++)
a[k]=a[k+1];


for(i=1;i<=n;i++)
		{
		 printf("\n%d",a[i]);
		}

		 getch();
 }
