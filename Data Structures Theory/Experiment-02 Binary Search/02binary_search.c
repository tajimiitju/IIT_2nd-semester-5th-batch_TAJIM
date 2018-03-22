#include<stdio.h>
#include<conio.h>
void main()
{
		int data[25],i,item,n,beg,mid,end;
		printf("How many elements are in your list?:");
		scanf("%d",&n);
		printf("Enter %d sorted elements:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
		}
		printf("\n\nEnter the item to be searched: ");
		scanf("%d",&item);
		end=n-1;
		beg=0;
		while(beg<=end)
		{
			 mid=(beg+end)/2;
			 if(item>data[mid])
			 beg=mid+1;
			 else if(item<data[mid])
			 end=mid-1;
			 else if(item==data[mid])
			{
				 printf("\n\nThe item %d is found in the list.",item);
				getch();
				exit(0);
			}
		 }
		 printf("\n\nThe item %d is not found in the list",item);
		 getch();
 }



