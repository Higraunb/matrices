/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void matrices(int len_of_array, int*** array)
{
	(*array) = (int**)malloc(len_of_array * len_of_array * sizeof(int*));
	for (int counter = 0; counter < len_of_array; counter++)
	{
		(*array)[len_of_array] = (int*)malloc(len_of_array * len_of_array * sizeof(int));
	}
}
int main()
{
	int** array = 0, len_of_array = 0;
	scanf("%d", &len_of_array);
	matrices(len_of_array, &array);
	for (int counter = 0; counter < len_of_array; counter++)
	{
		for (int counter_1 = 0; counter < len_of_array; counter++)
		{
			(array[counter][counter_1]) = counter;
			printf("%d\n", array[counter][counter_1]);
		}
	}
	for (int counter = 0; counter < len_of_array; counter++)
	{
		free(array[counter]);
	}
	free(array);
	int** a; // ��������� �� ��������� �� ������ ���������
	int i, j, n, m;
	system("chcp 1251");
	system("cls");
	printf("������� ���������� �����: ");
	scanf("%d", &n);
	printf("������� ���������� ��������: ");
	scanf("%d", &m);
	// ��������� ������ ��� ��������� �� ������
	a = (int**)malloc(n * sizeof(int*));
	// ���� ��������� �������
	for (i = 0; i < n; i++) // ���� �� �������
	{
		// ��������� ������ ��� �������� �����
		a[i] = (int*)malloc(m * sizeof(int));
		for (j = 0; j < m; j++) // ���� �� ��������
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	// ����� ��������� �������
	for (i = 0; i < n; i++) // ���� �� �������
	{
		for (j = 0; j < m; j++) // ���� �� ��������
		{
			printf("%5d ", a[i][j]); // 5 ��������� ��� ������� �������
		}
		printf("\n");
	}
	// ������� ������
	for (i = 0; i < n; i++) // ���� �� �������
		free(a[i]);  // ������������ ������ ��� ������
	free(a);
	getchar(); 
	getchar();
	return 0;
}
*/