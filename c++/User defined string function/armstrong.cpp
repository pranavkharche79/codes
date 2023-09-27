#include <stdio.h>
#include<math.h>
int main(){
	
	int a,org;
	printf("enter a number of which you want to check armstrong\n ");
	scanf("%d",&a);
	org=a;
	int count=0;
	while(a >0){
		count++;
		a=a/10;
	}
	a=org;
	int sum=0;
	while(a>0){
	int	lastdigit=a%10;
	  sum=sum+pow(lastdigit,count);
	  a=a/10;
	}
	if (sum==org){
		printf("%d is armstrong",sum);
	}
	else{ 
	printf("its not armstrong");
	}
	return 0;
}

