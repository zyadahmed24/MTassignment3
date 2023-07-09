/*
 ============================================================================
 Name        : Problem_09.c
 Author      : zyad ahmed
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int y=1,x=1,temp=0,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n-1!=0)
	{
		temp=y;
		y=x;
		x=x+temp;
		n--;
	}
	printf("the result:%d",x);
	return EXIT_SUCCESS;
}
