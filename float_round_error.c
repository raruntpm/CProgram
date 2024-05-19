#include <stdio.h>

//Infinite Loop
void float_compare_not_equal() { 
    float x = 0.0; 
    float dx = 0.1;
    int i = 0;
	
	printf("Float compare not equal\n");
    while (x != 1.0)
    {
        x += dx;
        i += 1;
        printf("Iteration %d: The value of x is %15.23f\n ", i, x);
    }   
    printf("\n");
}



//Not a generic solution
void float_less_than_1_0() { 
    float x = 0.0; 
    float dx = 0.1;
    int i = 0;
	
	printf("Float less than 1.0\n");
    while (x < 1.0)
    {
        x += dx;
        i += 1;
        printf("Iteration %d: The value of x is %15.23f\n ", i, x);
    }   
    printf("\n");
}



// Runs for 11 iteration compared to 10
void double_less_than_1_0() { 
    double x = 0.0; 
    double dx = 0.1;
    int i = 0;
	
	printf("Double less than 1.0\n");
    while (x < 1.0)
    {
        x += dx;
        i += 1;
        printf("Iteration %d: The value of x is %15.23f\n ", i, x);
    }   	
	printf("\n");
}



// Runs for 10 iteration compared for both float and double
void float_less_than_0_95() { 
    float x = 0.0; 
    float dx = 0.1;
    int i = 0;
	
	printf("Float less than 0.95\n");
    while (x < 0.95)
    {
        x += dx;
        i += 1;
        printf("Iteration %d: The value of x is %15.23f\n ", i, x);
    }   
	printf("\n");
}



void double_less_than_0_95() { 
    double x = 0.0; 
    double dx = 0.1;
    int i = 0;
	
	printf("Double less than 0.95\n");
    while (x < 0.95)
    {
        x += dx;
        i += 1;
        printf("Iteration %d: The value of x is %15.23f\n ", i, x);
    }   
	printf("\n");
}


int main( ){
	
	float_compare_not_equal();
	//float_less_than_1_0();
	//double_less_than_1_0();
	//float_less_than_0_95();
	//double_less_than_0_95();


}