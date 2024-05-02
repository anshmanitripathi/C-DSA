#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new (int);
void add_dll_lifo(struct stu *);
void traverse();

struct stu{
    int info;
    struct stu *next;
    struct stu *pre;
} *head = NULL, *temp, *p, *next , *pre;

void main(){
    int a, ch=1;
    while(ch!=0){
        printf("Enter the number : ");
        scanf("%d", &a);
        p = new(a);
        add_dll_lifo(p);
        printf("to continue press 1 and to exit press 0 : ");
        scanf("%d", &ch);
    }
    printf("The entered elements are as follows : ");
    traverse();
getch();
}

struct stu *new(int a){
    p = (struct stu*)malloc(sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    p->pre = NULL;
    return p;
}

void add_dll_lifo(struct stu *p){
    temp = head;
    if(temp == NULL){
        head = p;
    } else{
        p->next = temp;
        temp->pre = p;
        head = p;
        p->pre = head;

    }
}

void traverse(){
    temp = head;
    while(temp != NULL){
        printf("%d\t", temp->info);
        temp = temp->next;
    }
}