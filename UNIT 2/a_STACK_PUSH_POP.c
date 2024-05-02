#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int top = -1;
int stack[20];

void PUSH(int *, int , int);
int POP(int *);
void display(int*);

void main(){
    int ch, data, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    if(size > 20){
        printf("LImit exceed");
        exit(0);
    } do {
        printf("The avaiable options are : \n");
        printf("- PRESS 1 to PUSH an element to the stack.\n");
        printf("- PRESS 2 to POP an element to the stack. \n");
        printf("- PRESS 3 to QUIT from the program.\n");
        printf("Enter your choice  : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: printf("Enter the data you want to push : ");
                scanf("%d", &data);
                PUSH(stack, data , size);
                printf("After performing the operation stack is as follows : \n");
                display(stack);
            break;

        case 2: data = POP(stack);
                printf("The popped data is %d", data );
                printf("After performing the operation stack is as follows : \n");
                display(stack);
            break;
        
        case 3: exit(0);
        }
    } while(ch != 3);

getch();
}

void PUSH(int *stack , int data , int size){
    if(top == size - 1){
        printf("Insertion NOt posible , stack is full , Stack overflow");
    } else{
        top = top + 1;
        stack[top] = data;
    }
}

int POP(int *stack){
    int popped_element;
    if(top == - 1){
        printf("Insertion NOt posible, Stack underflow");
        return 0;
    } else{
        popped_element = stack[top];
        top = top - 1;
    }

    return popped_element;
}

void display(int *stack){
    int i;
    if(top == - 1){
        printf("Stack is empty.");
    } else{
        for(i=top; i>=0; i--){
            printf("%d \t", stack[i]);
        }
    }    
}