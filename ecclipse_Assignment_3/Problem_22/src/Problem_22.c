/*
 ============================================================================
 Name        : Problem_22.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int n_new)
{
	if(n_old ==0 || n_new ==0)
	{
		return 0;
	}
	arr_new[0] = arr_old[0];
	for(int i=1,j=1; i<n_old ; i++)
	{
		if(arr_old[i]!=arr_old[i-1])
		{
			arr_new[j] = arr_old[i];
			j++;
			if(j==n_new)
			{
				return 1;
			}
		}
	}
	return 1;
}

int main(void) {
	setbuf(stdout,NULL);
	int arr_sort[10], arr_new[5];
	printf("Enter a sorted array\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d ",&arr_sort[i]);
	}
	if(!removeDuplicates(arr_sort, 10, arr_new, 5))
	{
		printf("Error");
	}
	else
	{
		printf("Enter a sorted array: ");
		for(int i=0; i<5; i++)
		{
			printf("%d ",arr_new[i]);
		}
	}
	return EXIT_SUCCESS;
}
