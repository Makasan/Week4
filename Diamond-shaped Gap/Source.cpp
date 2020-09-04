#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, i, j;
	scanf("%d", &num);
	for (i = num; i > 0; i--) 
	{
		for (j = i; j > 0; j--) 
		{
			printf("*");
		}
		for(j = 2*(num-i); j>0; j--)
		{
			printf(" ");
		}
		for(j=i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < num; i++)
	{
		for (j = i+1; j > 0; j--)
		{
			printf("*");
		}
		for (j = 2 * (num - i-1); j > 0; j--)
		{
			printf(" ");
		}
		for (j = i+1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}