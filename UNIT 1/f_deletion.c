#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void delete(int a[], int n, int loc){
    int i=n;
    while(loc < i){
        a[loc] = a[loc+1];
        loc++;
    }
}


void main(){
    int a[20], i, n, item, loc;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    if(n>20){
        printf("NO. of elements exceed enter less than 20");
        exit(0);
    }else{
        printf("Enter the array : ");
        for(i=0;i<n;i++){
            printf("[%d] : ", i);
            scanf("%d",&a[i]);
        }
        printf("Enter the location of item to be deleted : ");
        scanf("%d", &loc);
        delete(a,n,loc);

        printf("Array after insertion is as follows : ");
        for(i=0;i<n-1;i++){
        printf("a[%d] : %d \n", i, a[i]);
        } 
    }
getch();
}