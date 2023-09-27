#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	printf("Enter the string to check whether it is palindrome or not: \n");
	gets(a);
	
	
	char c[10];
	strcpy(c,a);
	
	 strrev(a);
	if(strcmp(a,c)){
		printf("it's not a palindrome string'");
	}
	else{
		printf("It's a palindrome!");
	}
	return 0;
}
