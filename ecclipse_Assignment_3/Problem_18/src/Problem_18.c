/*
 ============================================================================
 Name        : Problem_18.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int longConsecOcuu(int *arr, int size,int num)
{
	int count=0,max=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i] == num)
		{
			count++;
		}
		else
		{
			max=(count>max ? count : max);
			count=0;
		}
	}
	return max;
}


int main(void) {
	setbuf(stdout,NULL);
	int arr[10]={0},num;
	printf("Enter the array:\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",arr+i);
	}
	printf("Enter the needed number:");
	scanf("%d",&num);
	printf("the longest occurrence:%d",longConsecOcuu(arr, 10, num));
	return EXIT_SUCCESS;
}
