#include <stdio.h>
#include <string.h>

int main(){
	char str1[10];
	char str2[]="world";
	strcpy(str1,str2);
	printf("%s\n",str1);
	if(strcmp(str1, str2))
		printf("string not equal\n");
	else
		printf("string are equal\n");
	return 0;
}
