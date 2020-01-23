#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10


struct stack{
    int top;
    int array_stack[MAXSIZE];
};
typedef struct stack STACK_TYPE;
STACK_TYPE s;

void push(void);
void pop(void);
void display(void);


int main(void) {

    int choice;
    int option = 1;

    system("clear");
    s.top=-1;

    while (choice!=4) {
        printf ("STACK\n");
        printf ("1. PUSH               \n");
        printf ("2. POP               \n");
        printf ("3. DISPLAY               \n");
        printf ("4. EXIT           \n");
        printf ("------------------------------------------\n");
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);

        switch (choice) {

            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;
        }

        fflush (stdin);
        printf("Press enter to continue...\n");
        getchar();
        system("clear");
    }
}

void push(void) {
    int num;

    if (s.top==(MAXSIZE-1)) {
        printf("Stack is full");
        return;
    }
    else{
        printf ("Enter the element to be pushed: ");
        scanf ("%d", &num);
        s.top += 1;
        s.array_stack[s.top]=num;
    }
    return;
}

void pop(void) {
    /* code */
}

void display(void) {
    if (s.top==-1) {
        printf("Stack empty.\n");
    }
    else{
        for (int i = s.top; i >= 0; i--){
            printf ("%d\n", s.array_stack[i]);
        }
    }
}
