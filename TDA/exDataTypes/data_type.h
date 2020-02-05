#define SIZE 50

enum data_type
{
    Float = 0,
    Int = 1,
    Char = 2
};

int data_type(char input[SIZE])
{   
    int num = 0, num2 = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] < 48 || input[i] > 57)
            num++;
        if (input[i] == 46)
            num2++;
    }

    if (num == 0)
        return Int;
    else if (num == 1 && num2 == 1)
        return Float;
    else
        return Char;
}