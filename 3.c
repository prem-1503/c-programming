#include <stdio.h>
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

	string1 = (char*)calloc(255,sizeof(char)); // alloting the size of memory to store the strings//
	string2 = (char*)calloc(255,sizeof(char));
	

	scanf("%s",string1);	//reading the strings into the alloted memories// 
	scanf("%s",string2);

	int len1 = strlen(string1);//length of strings
	int len2 = strlen(string2);
	string = (char*)calloc(len1 + len2 + 1,sizeof(char));  //string is memory alloted to store the concatanated strings//

	for(int i = 0;i <len1;i++)   // concatanating the strings//
	{
		string[i] = string1[i];
	}

	for(int i = 0;i < len2;i++)
	{
		string[len1] = string2[i];
		len1++;
	}
	
	printf("%s",string);
}
