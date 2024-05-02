#include<stdio.h>
#include<conio.h>

int fibo(int);

void main(){
    int num, i,c;
    printf("Emter the number of terms : ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        c = fibo(i);
        printf("%d\t",c);
    }
getch();
}

int fibo(int n){
    int c;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }else{
        c = fibo(n-1) + fibo(n-2);
    }
    return c;
}