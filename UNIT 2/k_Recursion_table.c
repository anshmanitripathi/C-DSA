#include<stdio.h>
#include<conio.h>

int table(int,int);

void main(){
    int num,i,a;
    printf("Emter the number : ");
    scanf("%d", &num);
    for(i=1;i<=10;i++){
        a = table(i,num);
        printf(" %d", a);
    }
getch();
}

int table(int n, int num){
    if(n==1)
    return num;
    else{
    return(table(n-1,num) + num);
    }

}