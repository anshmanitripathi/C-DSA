#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int);
void add_dll_fifo(struct stu *);
void traverse();
void delfirst();

struct stu{
    int info;
    struct stu *next;
    struct stu *pre;
} *p, *next, *pre, *head = NULL, *temp, *r;

void main(){
    int a, ch=1, item;
    while(ch!=0){
        printf("Enter a number : ");
        scanf("%d", &a);
        p = new(a);
        add_dll_fifo(p);
        printf("To continue press 1 and to exit press 0 : ");
        scanf("%d", &ch); 
    }
    printf("The elements of the linklist is : ");
    traverse();
    delfirst();
    printf("After deleting first linklist is as follows : " );
    traverse(head);
getch();
}

struct stu *new(int a){
    p = (struct stu *)malloc(sizeof(struct stu));
    p->info = a;
    p->next = NULL;
    p->pre = NULL;
    return p;
}

void add_dll_fifo(struct stu * p){
    temp = head;
    if(temp == NULL){
        head = p;
    } else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
        p->pre = temp;
    }
}

void traverse(){
    temp = head;
    while(temp != NULL){
        printf("%d\t", temp->info);
        temp = temp->next;
    }
}

void delfirst(){
    temp = head;
    head = head->next;
    free(temp);
}