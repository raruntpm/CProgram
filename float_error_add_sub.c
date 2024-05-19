#include <stdio.h>


int main( ){
    float pi = 3.14159265359;
    float k = 1000.0;
    float sum = pi + k;
    printf("pi = %15.7f\n", pi);
    printf("sum = %15.7f\n", sum);
    
    float pi2 = sum - k;
    printf("pi2 = %15.7f\n", pi2);
}