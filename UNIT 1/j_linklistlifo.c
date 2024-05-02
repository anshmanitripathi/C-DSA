#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int);
void addnode_lifo();
void traverse();

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
        addnode_lifo(p);
        printf("press 1 to continue and 0 for exit : \n");
        scanf("%d", &ch);
    }
    printf("the list is as follows : ");
    traverse(head);
    getch();
}   

struct stu *new(int a){
    p = (struct stu * )malloc(sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    return p;
}

void addnode_lifo(){
    temp = head;
    if(head == NULL){
        head = p;
    } else {
        p->next = temp;
        head = p;
        }
    }


void traverse(){
    temp = head;
    while(temp != NULL){
        printf("\n%d \n", temp->info);
        temp = temp->next;
    }
}


   



    

