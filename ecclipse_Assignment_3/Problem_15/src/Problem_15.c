/*
 ============================================================================
 Name        : Problem_15.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void concat(char *str1, char *str2)
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	int j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i+j]='\0';
}

int main(void) {
	setbuf(stdout,NULL);
	char str1[20],str2[20];
	printf("Enter the first string:\n");
	gets(str1);
	printf("Enter the second string:\n");
	gets(str2);
	concat(str1,str2);
	printf("The length is:%s",str1);
	return EXIT_SUCCESS;
}
