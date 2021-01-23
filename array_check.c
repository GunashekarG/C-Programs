#include<stdio.h>
int a[6]={1,2,3,4,5,6};
int main(){
    for(int i=0; i<5; i++){
        printf("a[i++] %d \n", a[i++]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("a[++i] %d \n", a[++i]);
    }
    return 0;
}