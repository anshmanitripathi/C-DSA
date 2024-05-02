#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert(int a[], int n, int item, int loc){
    int i=n;
    while(i>loc){
        a[i] = a[i-1];
        i--;
    }
    a[loc]=item;

    
  
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
        printf("Enter the item to be inserted : ");
        scanf("%d", &item);
        printf("Enter the location of item to be inserted : ");
        scanf("%d", &loc);
        insert(a,n,item,loc);

        printf("Array after insertion is as follows : ");
        for(i=0;i<=n;i++){
        printf("a[%d] : %d \n", i, a[i]);
        }
        
    }
getch();
}