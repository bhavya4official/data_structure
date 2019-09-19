#include<stdio.h>
int main()
{
	int arr[]={2,4,5,7,3,1},i,j,len=6;
	int item=7;
	for(i=0;i<len;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	while(j<len)
	{
		if(arr[j]==item)
		{
			break;
		}
		j++;
	}
	printf("%d found at %d index",item,j);
return 0;
}
