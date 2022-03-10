
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

void populate_array(int *array, int d);

int main(){
    
    int array_lenght, *array, min, max;
//    int *array;
    
    printf("Insert lenght of array: \n"); 
    scanf("%d",array_lenght);
  
    array =  malloc(lenght * sizeof(int)); 
    
    printf("Lenght of array is: %d\n",sizeof(n));
    
    printf("Lenght of array is: %d\n",sizeof(&array));
    populate_array(array, d); 
    
    printf("Size of array is: %d\n",sizeof(array));
    printf("Size of element is: %d\n",sizeof(*array));
    printf("Lenght of array is: %d\n",sizeof(array)/sizeof(int));

}


void populate_array(int *array, int d){
    
    for (int i=0; i<d; ++i){
        array[i] = rand();
    }
    printf("Random numbers:\n-----------------\n");
    for (int i=0; i<d; i++){
        printf("%d\n", array[i]); 
    }
}

void find_min_max(int *array){
    // Finds the min and max values of the array and adds it to pointer
    // variablse *min, *max defined in main() 
//    for (int i=0; i<lenght
}
