#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stu *new(int);
void addnode_fifo();
void traverse();
void del_before(int);

struct stu{
    int info;
    struct stu *next;
} *p, *r, *temp , *head=NULL;

int main(){
    int a, ch=1, item;
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
    printf("Enter the no. you want to delete before : ");
    scanf("%d", &item);
    del_before(item);
    printf("the list after deleting :");
    traverse(head);
    // getch();
    return 0;
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

void del_before(int item){
    temp = head;
    r = temp;
    if(head == NULL){
        printf("Deletion not possible");
    }
    if(head->info == item){
        printf("DEltion not possible because it is first node");
    }
    while(temp != NULL){
        if((temp->next != NULL) && (temp->next->info == item)){
            r->next = temp->next;
            free(temp);
        }
        r = temp; 
        temp = temp->next;
        
        }
}
