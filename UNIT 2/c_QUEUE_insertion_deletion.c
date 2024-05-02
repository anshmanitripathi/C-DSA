#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void queue_insertion(int);
void queue_deletion();
void traverse();

int queue[20];
int front=-1, rear=-1, item, size;


void main(){
    int ch;
    printf("Enter the size of the queue : ");
    scanf("%d", &size);
    if(size > 20){
        printf("limit exceed.");
        exit(0);
    } do{
        printf("\nChoices are as follows : \n");
        printf("press 1 for Insert an element.\n");
        printf("press 2 for Delete an element.\n");
        printf("press 3 for Exit from the program.\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: queue_insertion(size);
            printf("After insertion queue is as follows : ");
            traverse();
            break;
        case 2: queue_deletion();
            printf("After deletion queue is as follows : ");
            traverse();
            break;
        case 3: exit(0);
            break;
        
        default: printf("Invalid Input.");
            break;
        }
    } while (ch!=3);
getch();
}

void queue_insertion(int size){
    printf("Enter the item you want to insert : ");
    scanf("%d", &item);
    if(rear < size - 1){
        rear++;
        queue[rear] = item;
        if(front == -1){
            front = 0;
        }
    } else{
        printf("Overflow.\n");
    }
}

void queue_deletion(){
    if(front == -1){
        printf("underflow.\n");
    } else{
        item = queue[front];
        if(front == rear){
        front = -1;
        rear = -1;
    } else{
        front++;
    }
        
    }
}

void traverse(){
    int i;
    if(front == -1){
        return;

    } else{
        for(i=front; i<=rear; i++){
            printf("%d\t", queue[i]);
        }
    }
}