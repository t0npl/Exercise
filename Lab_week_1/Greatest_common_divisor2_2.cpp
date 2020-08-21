#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int fnum, snum, a;
	printf("Enter first number : ");
	scanf("%d", &fnum);
	printf("Enter second number : ");
	scanf("%d", &snum);
	a = snum;
	while (fnum % a != 0 || snum % a != 0) {
		a--;
	}
	printf("Greatest comon divisior = %d", a);
	return 0;
}