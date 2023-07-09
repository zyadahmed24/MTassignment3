/*
 ============================================================================
 Name        : Problem_17.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void swapArr(int *arr1, int size1, int *arr2, int size2)
{
	int iter=0,temp;
	iter = (size1<size2 ? size1 : size2);
	for(int i=0;i<iter;i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	int arr1[6]={0} ,arr2[10]={0};
	printf("Enter the first array:\n");
	for(int i=0; i<6; i++)
	{
		scanf("%d",arr1+i);
	}
	printf("Enter the second array:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",arr2+i);
	}
	swapArr(arr1,6,arr2,10);
	printf("arr1 after the swap: ");
	for(int i=0; i<6; i++)
	{
		printf("%d ",*(arr1+i));
	}
	printf("\narr2 after the swap: ");
	for(int i=0; i<10; i++)
	{
		printf("%d ",*(arr2+i));
	}
	return EXIT_SUCCESS;
}
