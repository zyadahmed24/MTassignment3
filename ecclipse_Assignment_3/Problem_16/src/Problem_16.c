/*
 ============================================================================
 Name        : Problem_16.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void revArr(char *arr,char size)
{
	int j=0,temp;
	size--;
	while(j<=size/2)
	{
		temp = arr[j];
		arr[j] = arr[size-j];
		arr[size-j] = temp;
		j++;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	char arr[9];
	printf("Enter the first string:\n");
	for(int i=0; i<9; i++)
	{
		scanf("%hhd",arr+i);
	}
	revArr(arr,9);
	for(int i=0; i<9; i++)
	{
		printf("%d ",*(arr+i));
	}

	return EXIT_SUCCESS;
}
