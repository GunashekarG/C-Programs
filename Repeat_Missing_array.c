/*- Lets take an array (read only) of n integers from 1 to n. All the integers appears once
excepta- Integer “A” is missing from this.
b- Integer “B” appears twice.
Example:
n = 5;
Input- [3 1 4 5 1]
Output - [2 1]
A= 2 and B= 1.*/


#include <stdio.h>
#include <stdint.h>

//Defining macros for size of array
#define MAX_LENGTH 32 //considering maximum length of the input array to be 32
#define RES_LENGTH    2  //considering the result array length to be 2 since only 2 elements are supposed to be in res array 

//Writing a function for swapping the elements
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    
//defining the read only array from which resulting array needs to be obtained
    const int arr[] = {3,1,4,2,5,5,7}; //Can give any numbers of the format, I have taken this for example purpose
    
//integer to store length of the original array
    int n = sizeof(arr)/sizeof(arr[0]), temp,i,j;
    
//defining array to store the sorted version of the original array and an array to store the final result
    int sort[n], res[RES_LENGTH] = {0};
    
//Copying the array to another array since the original array is supposed to be read only
    for(int s=0;s<n;s++){
        sort[s] = arr[s];
    }
    
    printf("Copied array is ..\n");
    for(int r=0; r<n; r++){
        printf("%d\t", sort[r]);
    }
    
    printf("\n");
    
//Sorting the array
        for (i = 0; i < n; ++i){
            for (j = i + 1; j < n; ++j){
                if (sort[i] > sort[j]) {
                    swap(&sort[i], &sort[j]);
                }
            }
        }
 
//Printing the sorted array
       printf("Sorted array is: \n");
        for (i = 0; i < n; ++i){
            printf("%d\t", sort[i]);
        }
            
        printf("\n");  
            
//Logic to obtain the result array
        for(int i=0; i<=n;i++){
            if(sort[i+1] != ((sort[i])+1)){
                //Finding the twice repeated element
               if( (sort[i+1] == sort[i]) && i<n-1){
                  printf("sort[i+1] is %d \n", sort[i+1]);
                  res[1] = sort[i];
                }
                
                //Finding the missing element
                else if ( (sort[i+1] > (sort[i]+1)) && i<n-1) {
                  //printf("sort[i+1] is %d \n", arr[i+1]);
                  res[0] = sort[i]+1;
                }
            }
        }
        
//Printing the result array
    printf("Result array is: \n");
    for(int j=0; j<RES_LENGTH;j++){
        printf("%d\t", res[j]);
    }
       
    return 0;
}