/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void Creatinmas(int* n, int** sizes, int** data)
{
	scanf("%d", n);
	int p = 1;
	*sizes = (int*)malloc(*n * sizeof(int));
	for (int i = 0;  i < *n; i++)
	{
		scanf("%d", &((*sizes)[i]));
		p *= (*sizes)[i];
	}
	*data = (int*)malloc(sizeof(int) * p);
}

int main()
{
	int* sizes = 0;
	Creatinmas(&n, &sizes,&mas)
}
*/