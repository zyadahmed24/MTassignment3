/*
 ============================================================================
 Name        : Problem_21.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


short* arrBet(short lowerV, short upperV)
{
	int size = upperV-lowerV+1;
	static short arr[20]={0};
	for(int i=0;i<size;i++)
	{
		arr[i] = upperV-i;
	}
	return arr;
}

int main(void) {
	setbuf(stdout,NULL);
	short lowerV,upperV;
	printf("Enter the upper value\n");
	scanf("%hd",&upperV);
	printf("Enter the lower value\n");
	scanf("%hd",&lowerV);
	short *arr1=NULL;
	arr1 = arrBet(lowerV,upperV);
	printf("The array is as follows:");
	for(int i=0; i<upperV-lowerV+1; i++)
	{
		printf("%d ",arr1[i]);
	}
	return EXIT_SUCCESS;
}
