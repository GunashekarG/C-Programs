#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
int n = 123;    //1111011
int val;
//Let's say we get the 3rd bit from the left, the output should be 0 
//since counting starts from 0, we are supposed to get the 2nd bit programatically
if((n>>2) & 0x01 == 1){
val = 1;
}else val=0;
printf("Value at 3rd bit is %d \n", val);
return 0;
}
