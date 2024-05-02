#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int a);
void addnode_fifo();
void traverse();
void add_after(int item);

struct stu{
    int info;
    struct stu *next;
} *p , *head = NULL , *temp , *r;

void main(){
    int a, ch = 1, item;
    while(ch!=0){
        printf("Enter the number : ");
        scanf("%d", &a);
        p = new(a);
        addnode_fifo();
        printf("Enter 1 to continue and 0 for exit");
        scanf("%d", &ch);
    }
    printf("the list is as follows : ");
    traverse(head);
    printf("Enter the info you want to enter : ");
    scanf("%d", &a);
    printf("Enter the item you want to enter before : ");
    scanf("%d", &item);
    p = new(a);
    add_after(item);
    printf("New link list is as follows :");
    traverse(head);

getch();
}

struct stu *new(int a){
    p = (struct stu *)malloc(sizeof(struct stu));
    p->info=a;
    p->next= NULL;
    return p;
}

void addnode_fifo(){
    temp = head;
    if(head == NULL){
        head = p;
    } else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}

void traverse(){
    temp = head;
    while(temp != NULL){
        printf("\n%d \n", temp->info);
        temp = temp->next;
    }
}

void add_after(int item){
    temp = head;
    while(temp != NULL){
        if(temp->info == item){
            p->next = temp->next;
            temp->next = p;
        }
        temp = temp->next;
    }
    
}