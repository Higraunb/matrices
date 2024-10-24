/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int* array; // указатель на массив
    int counter, q = 0 , s = 0, s1 = 0;
    double res = 0, res1 = 0;
    printf("enter quantity\n");
    scanf("%d", &q);
    // Выделение памяти
    array = (int*)malloc(q * q * sizeof(int));
    // Ввод элементов массива
    for (counter = 0; counter < q; counter++)
    {
        printf("enter marks\n");
        scanf("%d", &array[counter]);
        s += array[counter];
    }
    for (counter = 0; counter < q; counter++)
    {
        printf("enter marks 2\n");
        scanf("%d", &array[counter]);
        s1 += array[counter];
    }
    res = (double)s / (double)q;
    res1 = (double)s1 / (double)q;
    printf("res = %lf, %lf", res, res1);
    free(array);
    return 0;
}
*/