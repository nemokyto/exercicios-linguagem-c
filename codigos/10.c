#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 10. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
//-O número digitado ao quadrado
//-A raiz quadrada do número digitado

int main() {
	
	//variáveis
	
	float x;
	float y;
	float z;
	
	//info
	
	printf("insira um numero positivo: ");
	scanf("%f", &x);
	
	//atribuição
	
	y = x*x;
	z = sqrt(x);
	
	//condição principal

	if (x > 0) {
		printf("\no quadrado de %.1f: %.1f\n", x, y);
		printf("a raiz quadrada de %.1f; %.1f\n", x, z);
	}
	
	// condições secundárias
	
	else if (x < 0) {
		printf("\no numero nao pode ser negativo.\n");
	}
	else {
		printf("\ninvalido.\n");
	}
	
	system ("pause");
	return 0;
}
