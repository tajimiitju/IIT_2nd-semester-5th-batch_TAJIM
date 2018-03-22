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

printf("Enter the position in which you want to insert an item:\n");
scanf("%d",&pos);

printf("Enter the item you want to insert:");
scanf("%d",&item);


for(k=n;k>=pos;k--)
a[k+1]=a[k];

a[pos]=item;
n=n+1;

for(i=1;i<=n;i++)
		{
		 printf("\n%d",a[i]);
		}

		 getch();
 }
