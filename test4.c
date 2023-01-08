#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x,y,b0,b1,b2;
	printf("Please enter an integer x:");
	scanf("%d",&x);
		b0=x%10;
	b1=(x/10)%10;
	b2=x/100;
	y=b0*100+b1*10+b2;
	printf("y=%d/n",y);
	return 0;
}