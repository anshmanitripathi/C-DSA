#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 20
char stack[MAX];
int top = -1;

void push(char);
char pop();

void main(){
char str[20];
int i;
printf("Enter a string : ");
gets(str);
for(i=0; i < strlen(str); i++){
    push(str[i]);
}
for(i=0; i < strlen(str); i++){
    str[i] = pop();
}
printf("REversed String is : ");
puts(str);
getch();
}

void push(char ch){
    if(top == MAX-1){
        printf("stack overflow");
    } else{
        top = top+1;
        stack[top] = ch;
    }
}

char pop(){
    if(top==-1){
        printf("stack underflow");
    } else
    return stack[top--];
}