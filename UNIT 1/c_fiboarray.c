#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fibo(int n){
    int a;
    if(n==1){
        return (0);
    }

    if(n==2){
        return (1);
    } else if(n>2){
        a = fibo(n-1) + fibo(n-2);
    }
    return a;
}


void main(){
    int a[20], i, n,m;
    printf("Enter the terms of fibo series (max 20) : ");
    scanf("%d", &n);
    if(n>20){
        printf("NO. of elements exceed enter less than 20");
        exit(0);
    }else{
        for(i=0;i<n;i++){
            a[i] = fibo(i+1);
        }
        printf("fibo series is :");
        for(i=0;i<n;i++){
            printf("%d\t", a[i]);
        }

    }

getch();
}