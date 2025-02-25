/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int main()
{
	int idade;

	printf("insira sua idade: ");
	scanf("%d", &idade);
	while(idade < 0) {
		printf("bote certo:");
		scanf("%d", &idade);
	}
	if(idade>70) {
		printf("nao da");
	}
	else if(idade>50) {
		printf("meia idade");
	}
	else if(idade>18) {
		printf("jovem muleke");
	}
	else if(idade>12) {
		printf("baby");
	}
	else {
		printf("sai");
	}
	return 0;
}
