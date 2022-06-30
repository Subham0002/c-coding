#include <stdio.h>

int binarysearch(int ar[10],int size, int item);
int main() {
	int ar[10],item,size,index,i;
	printf("Enter the desired size(max10): ");
	scanf("%d", &size);
	printf("Enter the elements: ");
	for(i=0;i<size;i++)
	 scanf("%d", &ar[i]);
	printf("Enter the element to be searched for : ");
	scanf("%d", &item);
	index = binarysearch(ar,size,item);
	if(index==-1)
	 printf("\nElement not found !");
	else
	 printf("\nElement found  at position :%d", index+1);
	return 0;
}
int binarysearch(int ar[10],int size, int item)
{
	int beg,last,mid;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(item==ar[mid])
		 return mid;
		else if(item>ar[mid])
		 beg=mid+1;
		else
		 last=mid-1;	 
	}
	return -1;
}
