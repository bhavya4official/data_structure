//Insertion: insert an element in the array (at begning/ middle/ end)
#include<stdio.h>
int main()
{
	int i, arr[]={2,3,6,8,1}, len=5, j=len/*for looping operation*/;
	int new_item=7, k=2; //index of new item
	
	for(i=0;i<len;i++) //original array
	{
		printf("arr[%d]=%d \t",i,arr[i]);
	}
	
	while(k<=j) //shifting element to make space for new element
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[k]=new_item; //inserting new element at index k
 	len=len+1; //increase length counter of array by 1 for printing all elements
	
	printf("\nArrary elements after insertion:\n");  
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d \t",i,arr[i]);
	}
return 0;	
}
