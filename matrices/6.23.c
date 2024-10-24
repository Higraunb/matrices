/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	int number = 0,res_a =0, res_b = 0, res_v =0, res_g = 0
		,a = 0,z = 0,a1 = 0,x = 0, y = 0 , size_number = 0, num = 0, counter = 0;
	printf("enter number\n");
	scanf("%d", &number);
	num = number;
	while (number)
	{
		number /= 10;
		size_number++;
	}
	int* array;
	array = (int*)malloc(size_number * sizeof(int));
	printf("enter a\n");
	scanf("%d", &a);
	printf("enter z\n");
	scanf("%d", &z);
	printf("enter a1\n");
	scanf("%d", &a1);
	printf("enter x\n");
	scanf("%d", &x);
	printf("enter y\n");
	scanf("%d", &y);
	for (counter = 0; counter < size_number; counter++)
	{
		array[counter] = num % 10;
		num /= 10;
		if (array[counter] == a)
		{
			res_a++;
		}
		if (array[counter] % z == 0)
		{
			res_b++;
		}
		if (array[counter] > a1)
		{
			res_v += array[counter];
		}
		if ((array[counter] == x) || (array[counter] == y))
		{
			res_g++;
		}
	}
	printf("res a = %d\n", res_a);
	printf("res b = %d\n", res_b);
	printf("res v = %d\n", res_v);
	printf("res g = %d\n", res_g);
}
*/