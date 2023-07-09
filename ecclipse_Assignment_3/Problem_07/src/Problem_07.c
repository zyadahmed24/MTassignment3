/*
 ============================================================================
 Name        : Problem_07.c
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
	unsigned char arr[101]={0};
	int index;
	arr[0] = 1;
	for(int i=1;i<101;i++)
	{
		arr[i] = arr[i-1]+2;
	}
	printf("Enter the index:\n");
	scanf("%d",&index);
	printf("The result is:%d",arr[index]);
	return EXIT_SUCCESS;
}
