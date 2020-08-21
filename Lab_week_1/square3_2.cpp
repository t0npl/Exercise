#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	printf("Enter number : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("*");
	}
	for (int j = 0; j < a-2; j++) {
		printf("\n*");
		for (int k = 0; k < a-2; k++) {
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for (int l = 0; l < a; l++) {
		printf("*");
	}
	return 0;
}