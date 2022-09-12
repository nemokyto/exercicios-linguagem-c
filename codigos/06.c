#include <stdio.h>
#include <stdlib.h>

//6. Leia quatro notas, calcule a média aritmética e imprima o resultado.

int main () {
	
	//variáveis
	
	float n1;
	float n2;
	float n3;
	float n4;
	float y;
	
	//números
	
	printf("Informe a primeira nota: \n");
		scanf("%f", &n1);
	printf("Informe a segunda nota: \n");
		scanf("%f", &n2);
	printf("Informe a terceira nota: \n");
		scanf("%f", &n3);
	printf("Informe a quarta nota: \n");
		scanf("%f", &n4);
	
	//resultado

	y = (n1+n2+n3+n4)/4.0;
		if (y >= 6) {
		printf ("Media: %.1f\n", y);
		printf("Aprovado.\n");
		}
		else {
		printf ("Media: %.1f\n", y);
		printf("Reprovado.\n");
		}
	
	system("pause");
	return 0;
}
