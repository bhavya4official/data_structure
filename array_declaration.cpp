#include<stdio.h>
int main()
{
	int arr[]={2,3,1,4,7}; //an integer type array of size 5 will be created by the compiler and initialized
	int one_dim[10]={1,3,5,2,4,6}; //compiler create array of size 10, initialize it first 6 elements as specified and rest 4 elements as 0
	int two_dim[2][3]={{1,2,3},{3,1,4}}; //initialized one array with 2 rows and 3 columns
	int three_dim[2][3][3]={
							{{1,2,3},{3,4,5},{5,6,7}},
							{{3,2,1},{5,4,3},{7,6,5}}
							}; //initialized 3 arrays with 2 rows and 3 columns
	
	int n=5;
	int array[n]; //array size specified by the user
	return 0;
}

/*Linear Data Structure
Collection of homogeneous elements stored at contigous memory locations.
ar[0] is seen in compiler as *(ar+0)   here 0 is offset/distance from 1st element.
ar is a pointer containing memory location of the 1st element.
*/
