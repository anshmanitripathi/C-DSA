#include<stdio.h>
#include<conio.h>

int multiply(int,int);

void main(){
    int num1, num2, result;
    printf("Emter the number 1 : ");
    scanf("%d", &num1);
    printf("Emter the number 2 : ");
    scanf("%d", &num2);
    result = multiply(num1, num2);
    printf("Multiply = %d", result);
getch();
}

int multiply(int i, int j){
    if(i==0 || j==0)
        return 0;
    else if(j==1){
        return i;
    }    
    else{
        return(multiply(i,j-1) + i);
    }    
}