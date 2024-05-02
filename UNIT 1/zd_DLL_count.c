#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// fifo implementation of singly circular link list.

struct stu *new(int);
void add_fifo();
void traverse();
void count();

struct stu{
    int info;
    struct stu *next;
    struct stu *pre;
} *p, *head = NULL, *temp, *next, *pre;

void main(){
    int a, ch=1;
    while (ch!=0)
    {
        printf("Enter a number : ");
        scanf("%d", &a);
        p = new(a);
        add_fifo;
        printf("Enter 1 to continue and 0 for exit : ");
        scanf("%d", &ch);
    }
    printf("The entered list is as follows : \n");
    traverse();
    
getch();
}

struct stu *new(int a){
    p = (struct stu*) malloc (sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    p->pre = NULL;
    return p;
}

void add_fifo(){
    temp = head;
    if(temp==NULL){
        head = p;
    }else{
         while (temp->next != NULL)
    {
        temp = temp->next;
    }
    p->pre = temp;
    temp->next = p;
    }
}

void traverse(){
    temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->info);
        temp = temp ->next;
    }
}