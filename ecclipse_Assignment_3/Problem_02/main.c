/*
 ============================================================================
 Name        : assignment_3.c
 Author      : Zyad ahmed
 Version     : Problem 2
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void stringCheck(char *arr);

int main(void) {
	setbuf(stdout,NULL);
	printf("Enter the string:\n");
	char str[10]={0};
	scanf("%s",str);

	printf("this is %s",str);
	stringCheck(str);

	return 0;
}

void stringCheck(char *arr)
{
	char i=0,j=0;
	for(i=0;arr[i]!='\0';i++)
	{
		for(j=0;arr[j]!='\0';j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				printf("\nFalse");
				return ;
			}
		}
	}
	printf("\nTrue");
}
