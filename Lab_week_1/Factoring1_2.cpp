#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, i = 2;
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Factoring Result : ");
	while (i < a) {
		if (a % i == 0) {
			printf("%d x ", i);
			a /= i;
			if (a % i != 0) {
				i++;
			}
		}
		else {
			i++;
		}
	}
	printf("%d", a);
	return 0;
}