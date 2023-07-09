/*
 ============================================================================
 Name        : Problem_19.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int arrComp(int *arr1,int *arr2,int size)
{
	for(int i=0; i<size ; i++)
	{
		if(arr1[i] != arr2[i])
		{
			return 1;
		}
	}
	return 0;
}

int main(void) {
	setbuf(stdout,NULL);
	int arr1[10]={0},arr2[10]={0};
	printf("Enter the first array:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",arr1+i);
	}
	printf("Enter the second array:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",arr2+i);
	}

	arrComp(arr1, arr2, 10) ? printf("They are not identical"):printf("They are identical");
	return EXIT_SUCCESS;
}
