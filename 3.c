
#include <stdio.h> // Including standard input output header file
#include <stdlib.h> 

#include <string.h>
int t=0;
int merge(long long a[],int b,int m,int c)    //to merge the two arrays
{
	int e,f,g;
	int llen=m-b+1;        //length of the left array
	int rlen=c-m;          //length of the right array
	long long l[llen];
	long long r[rlen];
	for(e=0;e<llen;e++)     //inserting into the left and right array
	{
		l[e]=a[b+e];
	}
	for(f=0;f<rlen;f++)
	{
		r[f]=a[m+1+f];
	}
	e=0;
	f=0;
	g=b;
	while(e<llen && f<rlen)  //condition for inserting the elements in two arrays into the unsorted array
	{
		if(l[e]<=r[f])
		{
			a[g]=l[e];
			e++;
			g++;
		}
		else
		{
			a[g]=r[f];
			f++;
			g++;
		}
	}
	while(e<llen)    //if some elements are left in any of the two array then this is the condition to insert
	{
		a[g]=l[e];
		e++;
		g++;
	}
	while(f<rlen)
	{
		a[g]=r[f];
		g++;
		f++;
	}
	t+=1;    //count will increase for every time merge is used
	return 0;
}
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
