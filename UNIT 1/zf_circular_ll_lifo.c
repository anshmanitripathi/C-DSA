#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// fifo implementation of singly circular link list.

struct stu *new(int);
void add_lifo();
void traverse();

struct stu{
    int info;
    struct stu *next;
} *next, *head= NULL, *p, *temp;


void main(){
    int a, ch=1;
    while (ch!=0)
    {
        printf("Enter a number : ");
        scanf("%d", &a);
        p = new(a);
        add_lifo();
        printf("Enter 1 to continue and 0 to exit : ");
        scanf("%d", &ch);
    }

    printf("the entered list is as follows : ");
    traverse();
getch();
}

struct stu *new(int a){
    p = (struct stu*)malloc(sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    return p;
}

void add_lifo(){
    temp = head;
    if(temp==NULL){
        head = p;
        p->next = head;
    } 
    else{
        p->next = temp;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = p;
        head = p;
    }
}

void traverse(){
    temp = head;
    while(temp->next != head){
        printf("%d",temp->info);
        temp=temp->next;
    }
    printf("%d",temp->info);
}