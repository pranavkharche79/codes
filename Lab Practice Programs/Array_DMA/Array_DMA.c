#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	int *arr = (int *) malloc(n* sizeof(int));
	
	printf("Enter the elements : ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
		sum= sum+ *(arr+i);		
	}
	
	printf("SUM Of Elements Of Array is %d ",sum);
	
	free(arr);
	return 0;
}
