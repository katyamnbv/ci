// ��� ������� 4*4 ��������
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
	unsigned int *a;  // ��������� �� ������
	unsigned int i, j, n, m;
	printf("������� ���������� �����: ");
	scanf("%d", &n);
	printf("������� ���������� ��������: ");
	scanf("%d", &m);
	// ��������� ������
	a = (unsigned int*)malloc(n*m * sizeof(unsigned int));
	// ���� ��������� �������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j<m; j++)
		{
			if (i<0 || i>2 || j<0 || j>2)
				a = rand() % 4;
			else  a = 0;
			printf("%d ", a);

		}
		puts("\n");

	}
	// ����� ��������� �������
	for (i = 0; i<n; i++)  // ���� �� �������
	{
		for (j = 0; j<m; j++)  // ���� �� ��������
		{
			printf("%d ", *(a + i * m + j));

		}
		printf("\n");

	}
	// ������������ ������
	for (i = 0; i < n; i++)
	{
		free(a[i]);

	}
	free(a);
	free(m);
	return 0;

}
