#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>



#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

void populate_array(int *array, int array_lenght);
void find_min_max(int *array, int array_lenght, int *min, int *max);

int main(){
    
    int array_lenght, *array, min, max;
    printf("Insert lenght of array: \n"); 
    scanf("%d",&array_lenght);
  
    array =  malloc(array_lenght * sizeof(int)); 
    
    populate_array(array, array_lenght); 
    find_min_max(array, array_lenght, &min, &max);
    
    printf("Min value is %d", min);
    printf("\n");
    printf("Max value is %d", max); 
    
}


void populate_array(int *array, int array_lenght){
    
    for (int i=0; i<array_lenght; ++i){
        array[i] = rand();
    }
    printf("Random numbers:\n-----------------\n");
    for (int i=0; i<array_lenght; i++){
        printf("%d\n", array[i]); 
    }
}

void find_min_max(int *array, int array_lenght, int *min, int *max){
    // Finds the min and max values of the array and adds it to pointer
    // variablse *min, *max defined in main() 

    *min = array[0];
    *max = array[0];

    for (int i=0; i<array_lenght; i++) {
        *min = MIN(*min,array[i]);
        *max = MAX(*max, array[i]);     
    }

}
