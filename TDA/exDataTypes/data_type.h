#define SIZE 50

enum data_type
{
    Float = 0,
    Int = 1,
    Char = 2
};

void data_type()
{
    char input[SIZE];
    int longitud, num;

    fgets(input, 20, stdin);
    longitud = strlen(input);
    if ((longitud > 0) && (input[longitud - 1] == '\n'))
    {
        input[longitud - 1] = 0;
    }

    if (atoi(input) == 0 && strchr(input, ' ') == NULL)
        printf("Char %d\n", Char);

    else if (atof(input) != 0 && strchr(input, '.') != NULL)
        printf("Float %d\n", Float);

    else if (atoi(input) != 0)
        printf("Int %d\n", Int);


}