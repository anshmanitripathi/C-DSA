#include<stdio.h>
#include<conio.h>

int factorial(int);

void main(){
    int num, fact;
    printf("Emter the number : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial = %d", fact);
getch();
}

int factorial(int n){
    static int f = 1;
    if(n==0)
    return f;
    else{
    f = n * factorial(n-1);
    }
    return f;

}