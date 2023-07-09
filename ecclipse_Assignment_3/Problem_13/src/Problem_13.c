/*
 ============================================================================
 Name        : Problem_13.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void lettheApha(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(! ( (str[i]>=65 && str[i]<=65+26) || (str[i]>=97 && str[i]<=97+26)) )
		{
			int j=i;
			while(str[j]!='\0')
			{
				str[j]=str[j+1];
				j++;
			}
		}
		i++;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	char str[20];
	printf("Enter the string:\n");
	gets(str);
	lettheApha(str);
	printf("The length is:%s",str);
	return EXIT_SUCCESS;
}
