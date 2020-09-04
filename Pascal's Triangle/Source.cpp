#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j, num, k, m;
	scanf("%d", &num);
	for (i = 0; i < num; i++) 
	{
		for (j = 1; j < num - i; j++) 
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++) 
		{
			if (i == 0 || k == 0) 
			{
				m = 1;
				printf("%d ", m);
			}
			else 
			{
				m = m*(i - k + 1) / k;
				printf("%d ", m);
			}
		}
		printf("\n");
	}
	return 0;
}
