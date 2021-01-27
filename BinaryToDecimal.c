#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void convert(long long n){
int dec=0, rem, i=0;
while(n!=0){
rem = n%10;
n = n/10;
dec = dec + rem * pow(2,i);
++i;
}

printf("decimal value is %d \n", dec);
}

int main(){
long long n;
printf("Enter the binary number whose decimal has to be found out \n");
scanf("%lld", &n);
convert(n);
return 0;
}


