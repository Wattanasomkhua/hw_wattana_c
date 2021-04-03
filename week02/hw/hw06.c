#include <stdio.h>
int main (int arc,char*acgv[])
{
	float high,width,sum;
	printf("high:");
	scanf("%f",&high);
	printf("width:");
	scanf("%f",&width);
	sum=high*width;
	printf("result:%f",sum);
	return 0;
}
