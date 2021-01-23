#include <stdio.h>
#include <stdbool.h>

int main(){
int x = 123;    //01111011
//program to set a particular bit, say 3rd bit
//In order to set 3rd bit, since it starts from 0 [0-7], we need to count from 0 from left
//so we need to set (1<<2) to set 3rd bit and not (1<<3)
x |= (1 << 2);  //01111111 = 127
printf("Value after set is %d\n", x);
return 0;
}
