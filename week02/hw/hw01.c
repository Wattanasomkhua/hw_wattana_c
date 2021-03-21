#include <stdio.h>
int main (int arc,char*argv[])
{
	float numberlong,numberwidth,sum;
	printf("enter value:");
	scanf("%f",&numberlong);
	printf("enter value:");
	scanf("%f",&numberwidth);
 	sum = numberlong * numberwidth;
	printf("result:%f",sum);
	return 0;
}

