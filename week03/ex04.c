#include <stdio.h>
int main ()
{
	int sum,var;
	var = 2;
	sum = 0;
	sum += var++;
	printf("Sum = %d\n",sum);
	printf("Var = %d\n",var);
	return 0;
}
