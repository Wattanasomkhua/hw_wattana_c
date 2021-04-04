#include <stdio.h>
int main (int argc,char*argv[])
{
	int var1 ,var2;
	int result;
	var1 = 6;
	var2 = 2;
	result = var1 % var2;
	printf("%d mod %d = %d\n", var1, var2, result);
	return 0;
}

