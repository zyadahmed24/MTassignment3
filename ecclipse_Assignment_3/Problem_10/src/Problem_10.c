/*
 ============================================================================
 Name        : Problem_10.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void lowering(char *str);

int main(void) {
	setbuf(stdout,NULL);
	char str[20];
	printf("Enter the string:\n");
	gets(str);
	lowering(str);
	printf("The result is:%s",str);
//	puts(str);
	return EXIT_SUCCESS;
}

void lowering(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=65+26)
		{
			str[i]+=97-65;
		}
		i++;
	}
}
