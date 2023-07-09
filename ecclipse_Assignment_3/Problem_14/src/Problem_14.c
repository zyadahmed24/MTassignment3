/*
 ============================================================================
 Name        : Problem_14.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void revStr(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
	i--;
	int j=0,temp;
	while(j<=i/2)
	{
		temp = str[j];
		str[j] = str[i-j];
		str[i-j] = temp;
		j++;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	char str[20];
	printf("Enter the string:\n");
	gets(str);
	revStr(str);
	printf("The length is:%s",str);
	return EXIT_SUCCESS;
}
