#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j, num, k, odd;
	scanf("%d", &num);
	odd = 1;
	for (i = 1; i <= num; i++) {
		k = 0;
		for (j = 1; j <= num-i; j++) {
			printf(" ");
		}
		for (j = 1; j <= odd; j++) {
			if (j <= i) {
				k = k + 1;
			}
			else {
				k = k - 1;
			}
			printf("%d", k);
		}
		printf("\n");
		odd += 2;

	}
	return 0;
}