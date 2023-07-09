/*
 ============================================================================
 Name        : Problem_09_rec.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int faboc(int y, int x , int *n)
{
	if(*n != 0)
	{
		*n = *n-1;
		return faboc(x,y+x,n);
	}
	else
	{
		return x+y;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n == 0 || n==1)
	{
		printf("The result:%d",1);
		return EXIT_SUCCESS;
	}
	n-=2;
	printf("The result:%d",faboc(1,1,&n));
	return EXIT_SUCCESS;
}
