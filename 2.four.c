#include <stdio.h>

int main(void) {
	float x, y;
	char sign = '+';
	while (sign != '0') {
		printf("Input the sign: ");
		scanf("%c%*c", &sign);
		if (sign == '0') { break; }
		if (sign == '+' || sign == '-' || sign == '*' || sign == '/') {
			printf("x=");
			scanf("%f%*c", &x);
			printf("y=");
			scanf("%f%*c", &y);
			switch (sign) {
			case '+':
				printf("%.2f\n", x + y);
				break;
			case '-':
				printf("%.2f\n", x - y);
				break;
			case '*':
				printf("%.2f\n", x*y);
				break;
			case '/':
				if (y != 0) printf("%.2f\n", x / y);
				else printf("Must not! \n");
			}
		}
		else printf("Write a sign \n");
	}
	return 0;
}