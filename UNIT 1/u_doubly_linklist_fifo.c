#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int);
void add_dll_fifo();
void traverse();

struct stu{
    int info;
    struct stu *next;
    struct stu *pre;
} *p, *next, *pre, *head = NULL , *temp;

void main(){
    int a,ch=1;
    while(ch != 0){
        printf("Enter a number : ");
        scanf("%d", &a);
        p = new(a);
        add_dll_fifo();
        printf("To continue press 1 and to exit press 0 : ");
        scanf("%d", &ch);
    }
    printf("THe list is as follows :");
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

void add_dll_fifo(){
    temp = head;
    if(temp == NULL){
        head = p;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }    
            p->pre = temp;
            temp->next = p;
      
    }
}

void traverse(){
    temp = head;
    while(temp != NULL){
        printf("%d\t", temp->info);
        temp = temp->next;
    }
}