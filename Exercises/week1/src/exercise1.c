#include "exercise1.h" 

int main(){

    
    int n = 100; 
    printf("Series sums to 4/5 is %s\n", check_sum(n) ? "true":"false") ; 
   
    populate_array();

    printf("Array lenght: %d\n",&d); 
   return 0; 
}

bool check_sum(int n){
    
    int sign = -1;
    double s = 1; 

    for (int i=2; i<=n; i+=2){
        
        s+= (sign * 1/pow(2.0,i) ) ; 
        sign *= -1 ; 
    }
    bool check_sum = (s==4.0/5) ; 
    return check_sum ; 
}
void populate_array(){
    
    printf("Insert lenght of array: \n"); 
    int d; 
    scanf("%d",&d);
    printf("Array is of lenght: %d", d);
    int *array;
    array = (int*) malloc(d * sizeof(int)); 
    for (int i=0; i<d; ++i){
        array[i] = rand();
    }
    printf("Random numbers:\n-----------------\n");
    for (int i=0; i<d; i++){
        printf("%d\n", array[i]); 
    }
}
