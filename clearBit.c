#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
int n = 123;    //1111011
//Let's say we clear 4th bit from left, which results in 1110011 = 115
//since counting starts from 0, we are supposed to clear the 3rd bit programatically (not 1<<4)
n = n & ~(1<<3);
printf("Value after clearing 4th bit is %d \n", n);
return 0;
}
