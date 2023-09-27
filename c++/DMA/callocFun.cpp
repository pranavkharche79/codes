#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, size ,sum=0;
	printf("Enter no. of elements :");
	scanf("%d",&size);
	int* ptr = (int *)calloc(size , sizeof(int));

	for(int i=0; i < size; i++){
		printf("Enter the element no %d:  ",i+1);
//		scanf("%d",ptr+i);

		scanf("%d",&ptr[i]);
		sum= sum + ptr[i];
		
//		sum= sum + *(ptr+i);
	}
	printf("Avg = %d", sum/size);
	free(ptr);
	
	
}
