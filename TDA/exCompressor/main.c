#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void Buffer(int buffer, int pos, char param){

}


int Get(int buffer){
    
    return 0;
}


int Sum(int n1, int n2){
return (int)(Get(n1) + Get(n2));
}


int main(int argc, char *argv[])
{
    system("clear");

    //int count;
    int buffer = 0;

    unsigned int num = 5;
    int i=0,j;
    unsigned int size = sizeof(unsigned int);
    unsigned int maxPow = 1<<(size*8-1);

    printf("Number of arguments: %d\n", argc-1);
    
    for(;i<size*8;++i){
        printf("%u ", !!(buffer&maxPow));
        num = num<<1;
    }

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