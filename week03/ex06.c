#include <stdio.h>
void main()
{
	int y=2*(3+5)/(5+4)*2;
	printf("y is:%d\n",y);
	int x=2*3+5/5+4*2;
	int b=x*=y-4;
	int z= x +=x++*3+1* ++y;
	printf("b is:%d\n",b);
	printf("y is %d\n",y);
	printf("x is %d\n",x); 
	printf("z is %d\n",z);
	}
