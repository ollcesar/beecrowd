#include <stdio.h>

int main ()
{
	int pecaUm, numeroUm, pecaDois, numeroDois; 
	double valorUm, valorDois;

	scanf("%d %d %lf", &pecaUm, &numeroUm, &valorUm);
	scanf("%d %d %lf", &pecaDois, &numeroDois, &valorDois);

	printf("VALOR A PAGAR: R$ %.2lf\n" (numeroUm * valorUm) + (numeroDois * valorDois));

	return 0;
}
	