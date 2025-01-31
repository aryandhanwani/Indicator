#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char *p;
	
	printf("enter the string ");
	gets(str);
	
	p=&str;
	
	int length= strlen(p);
	
	printf("the length of %s is %d\n",str, length);
	
	return 0;
}
