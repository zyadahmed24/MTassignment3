/*
 ============================================================================
 Name        : Problem_08.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	unsigned short arr[20]={0};
	int index;
	arr[0] = 1;
	for(int i=1;i<20;i++)
	{
		arr[i] = arr[i-1]*3;
	}
	printf("Enter the index:\n");
	scanf("%d",&index);
	printf("The result is:%d",arr[index]);
	return EXIT_SUCCESS;
}
