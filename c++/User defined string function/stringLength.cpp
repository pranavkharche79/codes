#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10];
	printf("Enter the string: \n");
	gets(a);
	int len =strlen(a);
	int y=0;
	char b[10];
	while(len>=0){
		
		b[y]= a[len-1];
		y++;
		len--;
	}
	b[y] = '\0';
	printf("output is: %s", b);
	
	
	return 0;
}


