
#include <stdio.h> // Including standard input output header file
#include <stdlib.h> 

#include <string.h>

int main()
{
	char *string1, *string2, *string; //declaring the pointers for dynamic memory allocation//

	string1 = (char*)malloc(255*sizeof(char)); // Initializing string 1 //
	string2 = (char*)malloc(255*sizeof(char)); // Initializing string 2 //
	

	scanf("%s",string1);	//reading the strings into the alloted memories// 
	scanf("%s",string2);

	int len1 = strlen(string1); // length of string1 //
	int len2 = strlen(string2); // length of string2 //
	string = (char*)calloc(len1 + len2 + 1,sizeof(char));  //string is memory alloted to store the concatanated strings//

	for(int i = 0;i <len1;i++)   // inserting string1 in string //
	{
		string[i] = string1[i];
	}

	for(int i = 0;i < len2;i++) // inserting string2 in string //
	{
		string[len1] = string2[i];
		len1++;
	}
	
	printf("%s",string); // Printing the string //
}
