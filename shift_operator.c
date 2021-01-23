#include<stdio.h>
int main(){
    int a = 60;//01100000
    int b=40;
    int c;
    //b = a & (1 << 6);
    c = (a>>4)&(1);
    //printf("a & (1 << 6) %d", b);
    printf("a & b  = %d\n", c);
    return 0;
}