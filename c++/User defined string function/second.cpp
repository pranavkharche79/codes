#include<stdio.h>
#include<string.h>

int main(){
	char a[15];
	char b[15];
	
	printf("enter the string");
	gets(a);
    int len=strlen(a);
    
    
	
while (len>=0){
*b=*a[len-1];
len--;
b++;

}

	*b='\0';
	
printf("%s",b);
return 0;
}
	


