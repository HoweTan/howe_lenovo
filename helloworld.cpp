#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void get(char *p)
{
	p= (char*) malloc(100);
	strcpy(p," hello world");
 } 
int main(void)
{
	 char *str=NULL;
	 char a[]="hello";
	 char *p=
	 get(str);
	 //printf("%s\n",str);
	 free(str);
	
	return 0;
}
