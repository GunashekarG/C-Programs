#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n){
    if(n == 0 || n == 1)
        return 0;
  
    while(n != 1){
        if(n%2 != 0)
            return 0;
         n = n/2;   
    }
    return 1;
}

int main(){
int n;
isPowerOfTwo(5) ? printf("Yes\n"): printf("No\n");
isPowerOfTwo(256) ? printf("Yes\n"): printf("No\n");
return 0;
}

/*#include<stdio.h>
#include<stdbool.h>
 

bool isPowerOfTwo(int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
      if (n%2 != 0)
         return 0;
      n = n/2;
  }
  return 1;
}
 
int main()
{
  isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(64)? printf("Yes\n"): printf("No\n");
  return 0;
}*/
