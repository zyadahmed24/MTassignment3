/*
 ============================================================================
 Name        : Problem_03.c
 Author      : zyad ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr,int size);

int main(void) {
	setbuf(stdout,NULL);
	int arr[10]={0};
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",arr+i);
	}

	bubbleSort(arr,10);
	return EXIT_SUCCESS;
}



void bubbleSort(int *arr,int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
