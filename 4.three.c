#include<stdio.h>

int main()
{
	int a, chet = 0, nech = 0, sum1 = 0, sum2 = 0;
	float sred1, sred2;
	printf("Write elements. When You are through, press '0'.\n ");
	scanf("%i", &a);
	while (a != 0)
	{
		if (a % 2 == 0) {
			sum2 += a;
			++chet;
		}

		else {
			sum1 += a;
			++nech;
		}
		scanf("%i", &a);
	}

	sred2 = sum2 / chet;
	sred1 = sum1 / nech;

	printf("Sum of even elements: %i\n", sum2);
	printf("Sum of odd elements: %i\n", sum1);
	printf("Quantity of even elements: %i\n", chet);
	printf("Quantity of odd elements: %i\n", nech);
	printf("Average of even elemnts: %.1f\n", sred2);
	printf("Average of odd elements: %.1f\n", sred1);

	return 0;
}
