#include <stdio.h>

void str_cat(char *l1, char *l2);
int main(void)
 {
	char l1[] = "Hello, ";
	char l2[] = "world!";
	str_cat(l1, l2);
	printf("%s", l1);
	return 0;
	}

void str_cat(char *f, char *s)
 {
while ((*f++) != '\0');
	--f;
	while ((*f++ = *s++) != '\0');
	}