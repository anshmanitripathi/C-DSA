#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int queue[20];
int front = -1, rear = -1, item, size;

void queue_insertion(int);
void queue_deletion();
void traverse();

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
    if((front == 0 && rear == size - 1) || (front == rear + 1)){
        printf("Overflow , Insertion Not Possible.");                             
    } else{
        printf("Enter the item you want to insert : ");
        scanf("%d", &item);
        if(front == -1){
            front = 0;
            rear = 0;
        }
        else if(rear = size - 1 && front != 0){
            rear = 0;
        }
        rear = rear + 1;
        queue[rear] = item;
   }
}

void queue_deletion(){
    if(front == -1){
        printf("UNDERFLOW , Queue is empty \n ");
    } else {
        item = queue[front];
        if(front == rear){
            front = rear = -1;
        } else if(front == size - 1){
            front = 0;
        }
        printf("Deleted item is %d\n", item);
        front = front + 1;
    }
}

void traverse(){
    int i;
    int f = front, r= rear;

    if(front == -1){
        printf("Queue is empty.");
        return;

    } else if(f<=r){
        for(i=f; i<=r; i++){
            printf("%d\t", queue[i]);
        }
    } else if(f<= size - 1){
        for(i=f; i<= size -1 ; i++){
            printf("%d\t", queue[i]);
        }
    }
}