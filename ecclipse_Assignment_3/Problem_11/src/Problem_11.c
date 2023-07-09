/*
 ============================================================================
 Name        : Problem_11.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int freq(char *str,char needed)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==needed)
		{
			count++;
		}
		i++;
	}
	return count;
}

int main(void) {
	setbuf(stdout,NULL);
	char str[20],needed;
	printf("Enter the string:\n");
	gets(str);
	printf("Enter the needed char:");
	scanf("%c",&needed);
	printf("The result is:%d",freq(str,needed));
	return EXIT_SUCCESS;
}
