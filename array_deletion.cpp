//To delete an element form the array
#include<stdio.h>
int main()
{
	int i,arr[]={2,1,4,7,6,3}, len=6;
	int k=3; //deleting index
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d",i,arr[i]);
	}
	j=k;
	while(j<len)
	{
		arr[j-1]=arr[j];
		j++;
	}
	len=len-1;
	printf("Array elemetns after deletion.");
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d",i,arr[i]);
	}
return 0;
}
