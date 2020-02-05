#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int Compressor(int n1, int n2, int n3, int n4)
{
    return 0;
}

void Buffer(int buffer, int pos, char param)
{
}

int Get(int buffer)
{

    return 0;
}

int Sum(int n1, int n2)
{
    return (int)(Get(n1) + Get(n2));
}

int main(int argc, char *argv[])
{
    system("clear");

    int buffer = 0;
    int i = 0, j;
    int num = 5;

    int size = sizeof(char) * 8;
    int maxPow = 1 << (size - 1);

    printf("Number of arguments: %d\n", argc - 1);
    printf("Char is size %d.\n ", size);

    uint8_t c1 = (uint8_t)(argv[2]);

    //uint8_t mask = 0x0f;
    uint8_t value = 0x32;
    printf("Size of value %lu.\n ", sizeof(value));
    //printf("Masking: %u\n", mask & value);

    unsigned char byte = 2;    // Read from file
    unsigned char mask = 0xf; // Bit mask
    unsigned char bits[8];

    for (; i < 32; i++)
    {
        printf("%u ", (value & (mask << i)) != 0);
    }
    printf("\n\n");

    // i = 0;
    // printf("\n");
    // for (; i < size; ++i)
    // {
    //     printf("%u ", !!(buffer & maxPow));
    //     num = num << 1;
    // }

    // for(;i<size*8;++i){
    //     printf("%u ", !!(buffer&maxPow)); // print last bit and shift left.
    //     num = num<<1;
    // }

    getchar();
    system("clear");
    return 0;
}

// if (argc > 1){
//     for (count = 1; count < argc; count++)
//         printf("argv[%d] = %s\n", count, argv[count]);
// }
// else
//     printf("The command had no other arguments.\n");