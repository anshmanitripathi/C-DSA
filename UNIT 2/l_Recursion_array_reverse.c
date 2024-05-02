#include<stdio.h>
#include<conio.h>

void reverse(int[], int);

void main(){
    int a[20],i,n;
    printf("Emter the size : ");
    scanf("%d", &n);
    if(n>20){
        printf("Invalid Input");
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse = ");
    reverse(a,n-1);
getch();
}

void reverse(int a[],int n){
    if(n==0)
        return;
    printf("%d",a[n]);
    reverse(a,n-1);
}