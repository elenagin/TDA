
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;

    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 4, b = 2;

    printf("Before swap: \na = %d\nb = %d", a, b);
    swap(&a, &b);
    printf("\nAfter swap: \na = %d\nb = %d\n", a, b);
    return 0;
}
