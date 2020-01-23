#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// RUN SCRIPT WITH gnuplot --persist script.gp

void save_in_file(double array[], int lim){
    FILE *fp;

    fp = fopen ("iteration.txt", "w");
    for (int i=0; i<lim;i++){
        fprintf(fp, "%lf\n", array[i]);
    }

    fclose(fp);
}

int fibonacci_recursive(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

void fibonacci_iteration(int lim)
{
    FILE *fp;
    clock_t start, end;
    double cpu_time_used_I[lim];
    float num1=0, num2=1, next;

    fp = fopen ("iteration.txt", "w");

    for (int i=1; i<=lim;i++){
        start = clock();
        printf("%.0f ", num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;
        end = clock();
        cpu_time_used_I[i] = ((double) (end - start)) / CLOCKS_PER_SEC;
    }
    save_in_file(cpu_time_used_I, lim);
}

int main(void){
    FILE *fp;
    int lim, c, i=0;
    clock_t start, end, total;
    double cpu_time_used_I, cpu_time_used_R;

    fp = fopen ("iteration.txt", "w");

    printf("\nIngresa el límite de tu serie: ");
    scanf("%d", &lim);
    system("clear");
    printf("Fibonacci Iteration\n");
    fibonacci_iteration(lim);

    fp = fopen ("recursive.txt", "w");
    printf("\n\nFibonacci Recursive: \n");
    for (c = 1; c <= lim; c++){
        start = clock();
        printf("%d ", fibonacci_recursive(i));
        i++;
        end = clock();
        cpu_time_used_R = ((double) (end - start)) / CLOCKS_PER_SEC;
        fprintf(fp, "%lf\n", cpu_time_used_R);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
