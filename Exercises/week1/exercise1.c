#include "exercise1.h" 

int main(){

    
    int n = 100; 
    printf("Series sums to 4/5 is %s", check_sum(n) ? "true":"false") ; 
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
