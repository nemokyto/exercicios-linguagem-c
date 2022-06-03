#include <stdio.h>
#include <stdlib.h>

//7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

int main() {
	
	//variáveis
	
	float x;
	float y;
	float z;
	
	//atribuição
	
	printf("conversor de real brasileiro para dolar americano\n");
	printf("informe o valor em BRL: ");
		scanf("%f", &x);
	printf("\ninforme a cotacao do USD em BRL: ");
		scanf("%f", &y);
	
	//calculo
	
	z = x/y;
	printf ("\nem USD: %2.f\n", z);
	
	system ("pause");
	return 0;
}
