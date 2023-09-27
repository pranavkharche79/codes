#include<stdio.h>
void ustrcpy(char*, char*);
int main(){
	
	char a[10];
	printf("Enter the string ");
	gets(a);
	char b[10];
	
	ustrcpy(a,b);
	printf("Output: %s",b);
	return 0;
}
void ustrcpy(char* p, char* q){
	
	while(*p != '\0'){
		*q= *p;
		p++;
		q++;
	}
}
