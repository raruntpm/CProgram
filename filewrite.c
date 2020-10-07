#include <stdio.h>
#include <stdlib.h> 
int main()
 {
	FILE *fptr;
	int age;
	char name[20];
	float salary;
	
	fptr= fopen("Report.txt", "w");
	printf("Enter the name");
	scanf("%s", name);
	fprintf(fptr," Name is %s\n", name);
	printf("Enter the Age ");
	scanf("%d", &age);
	fprintf(fptr," Age is %d\n", age);
	printf("Enter the salary ");
	scanf("%f", &salary);
	fprintf(fptr," Salary is %.2f\n", salary);
	fclose(fptr);
	exit(0);
 }