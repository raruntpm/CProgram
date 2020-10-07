 #include <stdio.h>
 
 int main()
 {
	FILE *fp, *fptr3, *fptrnot3;
	int value;
	
	//open the file
	fp = fopen("listofnumber.txt", "r");
	fptr3    = fopen("DivisibleBy3.txt", "w");
	fptrnot3 = fopen("NotDivBy3.txt", "w");
	while (1)
	{
		fscanf(fp,"%d", &value);
		
		if(feof(fp))
			break;		
		
		if(value%3 == 0)
			fprintf(fptr3,"%d\n", value);
		else
			fprintf(fptrnot3,"%d\n", value);
			
	}
	fclose(fp);
	fclose(fptr3);
	fclose(fptrnot3);
	return 0;
 
 }