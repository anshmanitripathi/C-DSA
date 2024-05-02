#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int max(int a[], int n){
    int i;
    int max = 0;
    for(i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
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
        m = max(a,n);
        printf("Maximum of array is %d", m);
    }

getch();
}