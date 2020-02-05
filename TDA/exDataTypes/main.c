#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "data_type.h"


int main()
{
    system("clear");

    char input[50];
    int length;

    fgets(input, 20, stdin);
    length = strlen(input);
    if ((length > 0) && (input[length - 1] == '\n'))
    {
        input[length - 1] = 0;
    }
    if (data_type(input) == Int)
        printf("Input is INT");
    else if (data_type(input) == Float)
        printf("Input is FLOAT");
    else
        printf("Input is CHAR");

    getchar();
    system("clear");
    return 0;
}
