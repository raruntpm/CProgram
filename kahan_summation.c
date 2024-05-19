#include <stdio.h> 

double KahanSummation(double f)
{
    double sum = 0.0;
    // Variable to store the error
    double c = 0.0;
    int i=0;
 
    // Loop to iterate over the array
    for(i=0; i<10; i++) 
    {
        double y = f - c;
        double t = sum + y; 
         
        // Algebraically, c is always 0
        // when t is replaced by its
        // value from the above expression.
        // But, when there is a loss,
        // the higher-order y is cancelled
        // out by subtracting y from c and
        // all that remains is the
        // lower-order error in c
        c = (t - sum) - y; 
        sum = t;
    }
    return sum;
    
}

double floatError(double f)
{
    double sum = 0.0;
    int i;
    
    for(i=0; i<10; i++)
        sum += f;
        
    return sum;
}

int main() {
        
    printf("The Normal sum is %15.35f\n", floatError(0.1));
    printf("The Kahan sum is %15.35f\n", KahanSummation(0.1));

    return 0;
}