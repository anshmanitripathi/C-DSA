#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int a);
void addnode_fifo();
void traverse();
void add_before(int item);
void del_first();
void del_last();

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
    printf("After delete first list is as follows : ");
    del_first();
    traverse();
    printf("After delete last list is as follows : ");
    del_last();
    traverse();

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

void add_before(int item){
    temp = head;
    if(temp->info == item){
        p->next = temp;
        head = p;
    } else{
        while(temp != NULL){
        if(temp->info == item){
            r->next = p;
            p->next = temp;
        }

        r = temp;
        temp = temp->next;
    }
    }
}

void del_first(){
    temp = head;
    if(head == NULL){
        printf("Deletion Not possible");
        getch();
        exit(0);
    }

    head = head->next;
    free(temp);
}

void del_last(){
    temp = head;
    while(temp->next != NULL){
        r = temp;
        temp =temp->next;
    }
    r->next = NULL;
    free(temp);

}