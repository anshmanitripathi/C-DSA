#include<stdio.h>
#include<conio.h>

int reverse_multidigit(int);

void main(){
    int num, result;
    printf("Emter the multi digit number : ");
    scanf("%d", &num);
    result = reverse_multidigit(num);
    printf("Reverse = %d", result);
getch();
}

int reverse_multidigit(int n){
    int b;
    static int r = 0;
    if(n==0){
        return n;
    }else{
        b = n%10;
        r = (r * 10) + b;
        reverse_multidigit(n/10);
    }
    return r;
}