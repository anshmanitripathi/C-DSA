#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int min(int a[], int n){
    int i=0;
    int min = a[i];
    for(i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}


void main(){
    int a[20], i, n,m;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    if(n>20){
        printf("NO. of elements exceed enter less than 20");
        exit(0);
    }else{
        printf("Enter the array : ");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        m = min(a,n);
        printf("Maximum of array is %d", m);

    }

getch();
}