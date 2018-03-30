#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	char bin[50] = {};
	printf("Write a number \n");
	scanf("%d", &n);
	
	int tmp = n;
	int len = 0;
	for (int i = 0; tmp; ++i) {
		bin[i] = '0' + tmp % 2;
		tmp = tmp / 2;
		len++;
	}
	
	if (n == 0) {
		bin[0] = '0';
		len = 1;
	}
	
	for (int i = len - 1; i >= 0; --i) {
		printf("%c ",bin[i]);
	} 
}

