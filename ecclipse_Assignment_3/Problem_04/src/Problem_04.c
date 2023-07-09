/*
 ============================================================================
 Name        : Problem_04.c
 Author      : zyad ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *arr,int size);

int main(void) {
	setbuf(stdout,NULL);
	int arr[10]={0};
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",arr+i);
	}
	selectionSort(arr, 10);
	return EXIT_SUCCESS;
}

void selectionSort(int *arr,int size)
{
	int temp,min,ind;
	for(int i=0;i<size-1;i++)
	{
		min = arr[i];
		for(int j=i;j<size;j++)
		{
			if(min>=arr[j])
			{
				ind = j;
				min=arr[j];
			}
		}
		temp=arr[i];
		arr[i]=arr[ind];
		arr[ind]=temp;
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
