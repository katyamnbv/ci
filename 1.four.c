#include <stdio.h>
#include <limits.h>

int main(void)
{ 
	int n, m, r;
	for (n = 1; n <= 10; ++n) {
		r = 1;
		
		for (m = 1; m <= n; ++m) {
		r *= m;
		}
		printf(" %i! = %i\n", n, r);
	}

	return 0;
}