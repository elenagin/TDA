#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//https://www.youtube.com/watch?v=9k-l_ol9jok

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
    clock_t start, end, total;
    double cpu_time_used_I, cpu_time_used_R;

    printf("\nIngresa el límite de tu serie: ");
    scanf("%d", &lim);
    system("clear");

    printf("Fibonacci Iteration\n");
    start = clock();
    fibonacci_iteration(lim);
    end = clock();
    cpu_time_used_I = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nIteration took %f seconds to execute \n", cpu_time_used_I);

    printf("\n\nFibonacci Recursive: \n");
    start = clock();
    for (c = 1; c <= lim; c++){
        printf("%d ", fibonacci_recursive(i));
        i++;
    }
    end = clock();
    cpu_time_used_R = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nRecursive took %f seconds to execute \n", cpu_time_used_R);
    printf("\n");
    return 0;
}
