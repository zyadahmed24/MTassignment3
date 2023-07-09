/*
 ============================================================================
 Name        : Problem_23.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void freqCount(char *str)
{
	int i=0,j=0,count[20]={0};
	while(str[i]!='\0')
	{
		while(str[j]!='\0')
		{
			if(str[j] == str[i])
			{
				count[i]++;
			}
			j++;
		}
		i++;
		j=0;
	}
	printf("The frequencies: ");
	for(int i=0; i<20;i++)
	{
		printf("%d ",count[i]);
	}
}

int main(void) {
	setbuf(stdout,NULL);
	char str[20];
	printf("Enter the string:\n");
	gets(str);
	freqCount(str);
	return EXIT_SUCCESS;
}
