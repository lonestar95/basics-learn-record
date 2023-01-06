#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c',\0};//  \0×Ö·û´®½áÊø±êÖ¾
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	return 0;
}