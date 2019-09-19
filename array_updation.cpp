//Updating an existing array element at a particular index value to a new element
#include<stdio.h>
int main()
{
	int arr[]={3,2,5,6,9,1}, i, len=6;
	int item=7,k=4;  //4th element
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d\t",i,arr[i]);
	}
	arr[k-1]=item;
	printf("\nAfter updation:\n");
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d\t",i,arr[i]);
	}
return 0;
}
