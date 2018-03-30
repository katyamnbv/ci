#include <stdio.h>
int main(void) {
	int n=8000, j = 2;
	int P[n];
	for ( int i = 2 ; i <= n; ++i){
		P[i] = 0;
	}
	for(int i = 2 ; i <= n; ++i){
		if(!P[i]){
			printf("%i ", i);
			while( i*j <= n ){
				P[i*j] = 1;
				j++;
			}
			j = 2;
		}
	}
}