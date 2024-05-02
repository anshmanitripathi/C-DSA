#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int);
void addnode_fifo();
void traverse();
void counts();

struct stu{
    int info;
    struct stu *next;
} *p, *temp , *head=NULL;

void main(){
    int a, ch=1;
    while(ch != 0){
        printf("Enter a number\n");
        scanf("%d", &a);
        p = new(a);
        addnode_fifo(p);
        printf("press 1 to continue and 0 for exit : \n");
        scanf("%d", &ch);
    }
    printf("the list is as follows : ");
    traverse(head);
    counts();
    getch();
}   

struct stu *new(int a){
    p = (struct stu * )malloc(sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    return p;
}

void addnode_fifo(){
    temp = head;
    if(head == NULL){
        head = p;
    } else {
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}

void traverse(){
    temp = head;
    while(temp != NULL){
        printf("\n%d\n", temp->info);
        temp = temp->next;
    }
}


void counts(){
    int totalnode = 0;
    int positivenode = 0;
    temp = head;
    while(temp!=NULL){
        totalnode++;
        if(temp->info > 0){
            positivenode++;
        }
        temp = temp->next;
    }

    printf("TOTAL nodes = %d", totalnode);
    printf("TOTAL positive nodes = %d", positivenode);
}   



    

