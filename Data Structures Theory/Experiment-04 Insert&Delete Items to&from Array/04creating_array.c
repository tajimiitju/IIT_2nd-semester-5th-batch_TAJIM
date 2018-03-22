#include<stdio.h>
#include<conio.h>
void main()
{
		int a[25],i,n;
		printf("How many elements do you have in the array?:");
		scanf("%d",&n);
		printf("Enter %d elements:\n",n);
		for(i=1;i<=n;i++)
		{
		 scanf("%d",&a[i]);
		}
printf("\nCreated array is:\n");
for(i=1;i<=n;i++)
		{
		 printf("\n%d",a[i]);
		}

		 getch();
 }
