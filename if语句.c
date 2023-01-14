#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=4,b=3,c=5,t=0;
	if(a<b)t=a;a=b;b=t;
	if(a<c)t=a;a=c;c=t;
	printf("%d%d%d\n",a,b,c);
	return 0;
}