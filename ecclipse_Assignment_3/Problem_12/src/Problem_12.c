/*
 ============================================================================
 Name        : Problem_12.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int length(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

int main(void) {
	setbuf(stdout,NULL);
	char str[20];
	printf("Enter the string:\n");
	gets(str);
	printf("The length is:%d",length(str));
	return EXIT_SUCCESS;
}
