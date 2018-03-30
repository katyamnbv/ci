#include <stdio.h>
int main(void) {
	int n, triangularNumber;
	triangularNumber=0;
            for (n=5; n<=50; n=n+5)
            {
	triangularNumber=n*(n+1)/2;
	printf ("Triangular numbers from 5 to 50: %i\n", triangularNumber);
            }
	return 0;
}