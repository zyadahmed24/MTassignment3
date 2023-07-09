/*
 ============================================================================
 Name        : Problem_05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findIndex(int *arr, int size , int num);

int main(void) {
	setbuf(stdout,NULL);
	int arr[5]={0},num;
	printf("Enter the array elements:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",arr+i);
	}
	printf("Enter your number:\n");
	scanf("%d",&num);
	printf("this the index %d",findIndex(arr,5,num));
	return EXIT_SUCCESS;
}

int findIndex(int *arr, int size ,int num)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}
