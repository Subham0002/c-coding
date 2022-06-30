#include<stdio.h>

void binaryRec(int a[],int first,int last,int e)
{
	int mid;
	if(first>last)
	{
		printf("item not found !!");
		return;
		
	}
	
	mid =(first+last)/2;
	if(a[mid]<e)
	 binaryRec(a,mid+1,last,e);

	else if(a[mid]==e)
	{printf("found at position %d",mid+1);
	 
    	return;
	
	}
	
	else if(a[mid]>e)
	 binaryRec(a,first,mid-1,e);
	 
}
int main()
{
	int i,n,s,a[20];
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	printf("Enter elements ");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	
	printf("enter the element to be searched for :\n");
	scanf("%d", &s);
	
	binaryRec(a,0,n-1,s);
	
	 
}
