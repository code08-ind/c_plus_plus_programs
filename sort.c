#include <stdio.h> 

int main() 
{ 
  
     
   int i = 0, j, n = 0, min, index; 

  
    // declaring array to store data from file 
    int arr[100000]; 
  
     
    // declaring file pointer   
    FILE* fptr;  
  
    // opening the integer file. 
    fptr = fopen("mast.txt", "r");  
  
  
    // scanning integer from file to array 
    while (fscanf(fptr, "%d", &arr[i]) == 1)  
    { 
  
        // for counting the number of elements 
        n++;  
  
        // for incrementing the array index 
        i++;  
    } 
  
    // logic for selection sort.... 
    // starts here... 
  
   
    
  
    for (i = 0; i < n - 1; i++) { 
        min = arr[i]; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < min) { 
                min = arr[j]; 
                index = j; 
            } 
        } 
  
        // swapping the smallest number with  
        // the current arr[i]th value 
        int temp = arr[i]; 
        arr[i] = min; 
        arr[index] = temp; 
    } 


   
  
    // printing the sorted array... 
    for (i = 0; i < n; i++) {
	
        printf("%d ", arr[i]); 
}
   
  
    return 0; 
}
