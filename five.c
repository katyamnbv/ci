#include <stdio.h>
#include <string.h>
int main() {
	char str[1000000];
	char k;
	printf("Write the word: ");
	scanf_s("%s", str, 1000000);
	getchar();
	printf("Write the symbol: ");
	scanf_s("%c", &k);
	int i, n, low, high, mid;
	n = strlen(str);
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (str[mid] == k) {
			printf("Searching symbol is found on %d place.\n", mid);
			return 0;
		}
			
		if (str[mid] < k) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return 0;
}
