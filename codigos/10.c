#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 10. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
//-O n�mero digitado ao quadrado
//-A raiz quadrada do n�mero digitado

int main() {
	
	//vari�veis
	
	float x;
	float y;
	float z;
	
	//info
	
	printf("insira um numero positivo: ");
	scanf("%f", &x);
	
	//atribui��o
	
	y = x*x;
	z = sqrt(x);
	
	//condi��o principal

	if (x > 0) {
		printf("\no quadrado de %.1f: %.1f\n", x, y);
		printf("a raiz quadrada de %.1f; %.1f\n", x, z);
	}
	
	// condi��es secund�rias
	
	else if (x < 0) {
		printf("\no numero nao pode ser negativo.\n");
	}
	else {
		printf("\ninvalido.\n");
	}
	
	system ("pause");
	return 0;
}
