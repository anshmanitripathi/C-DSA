#include<stdio.h>
#include<conio.h>

int digitsum(int);

void main(){
    int num, result;
    printf("Emter the number : ");
    scanf("%d", &num);
    result = digitsum(num);
    printf("Sum = %d", result);
getch();
}

int digitsum(int n){
    int b;
    static int r = 0;
    if(n==0){
        return n;
    }else{
        b = n%10;
        r = r + b;
        digitsum(n/10);
    }
    return r;
}