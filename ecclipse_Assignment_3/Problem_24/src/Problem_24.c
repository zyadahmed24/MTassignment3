/*
 ============================================================================
 Name        : Problem_24.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findSecMAX(int *arr, int size)
{
	int max_2=0,max=0,temp=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i] > max)
		{
			temp = max;
			max = arr[i];
			max_2 = temp;
		}
	}
	return max_2;
}

int main(void) {
	setbuf(stdout,NULL);
	int arr[10]={0};
	printf("Enter the array:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",arr+i);
	}
	printf("the second max is: %d",findSecMAX(arr, 10));
	return EXIT_SUCCESS;
}
