/*
 ============================================================================
 Name        : assignment_3.c
 Author      : Zyad ahmed
 Version     : Problem 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int summation(int *arr, int size);

int main(void) {
	setbuf(stdout,NULL);
	int arr[5]={0};
	printf("Enter the array elements:\n");
	for(int i=0; i<5 ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("the sum is:%d",summation(arr,5));
	return 0;
}

int summation(int *arr, int size)
{
	int sum=0;
	for(int i=0; i<size ; i++)
	{
		sum+= arr[i];
	}
	return sum;
}
