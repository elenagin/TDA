#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fibonacci_recursive(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

void fibonacci_iteration(int lim)
{
    float num1=0, num2=1, next;

    for (int i=1; i<=lim;i++){
        printf("%.0f ", num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
}

int main(void){
    int lim, c, i=0;
    clock_t start_t, end_t, total_t;

    start_t = clock();
    printf("Starting of the program, start_t = %ld\n", start_t);

    printf("\nIngresa el límite de tu serie: ");
    scanf("%d", &lim);
    system("clear");
    printf("Fibonacci Iteration\n");
    fibonacci_iteration(lim);
    printf("\n\nFibonacci Recursive: \n");
    for (c = 1; c <= lim; c++){
        printf("%d ", fibonacci_recursive(i));
        i++;
    }
    printf("\n\n");
    return 0;
}
