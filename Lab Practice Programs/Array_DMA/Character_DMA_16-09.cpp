#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sum=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	char *arr = (char *) malloc(n* (sizeof(char)+1));
	
	printf("Enter the character string : ");

	scanf("%s",arr);		
	
	printf("%s",arr);
	
	free(arr);
	return 0;
}
