/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int main()
{
	int num;
	int mult= 10;
	int result;

	printf("insira um numero: ");
	scanf("%d", &num);

	while(mult <= 10 && mult >= 1) {
		result = num * mult;
		printf("\n %d * %d = %d",num, mult, result);
		mult = mult - 1;
	}

	return 0;
}