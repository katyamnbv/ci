#include <stdio.h>

int main(void) {
	float C;
	float F=27;
	C = (F-32)/1.8;
	printf("В %g градусах Фаренгейта %g градуса Цельсия.", F, C);
	return 0;
}
