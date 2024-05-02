#include<stdio.h>
#include<conio.h>

int power(int,int);

void main(){
    int num, poww, result;
    printf("Emter the number : ");
    scanf("%d", &num);
    printf("Emter the power : ");
    scanf("%d", &poww);
    result = power(num, poww);
    printf("Answer = %d", result);
getch();
}

int power(int a, int b){
    static int r=1;
    if(b==0){
        return 1;
    }    
    else{
        r=r*a;
        power(a,b-1);
    }    
    return r;
}