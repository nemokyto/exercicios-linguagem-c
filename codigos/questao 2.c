#include <stdio.h>
#include <stdlib.h>

//2.Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.

int main () {
	
	//vari�veis
	
	int x;
	int y;
	int z;
	int result;
	
	//soma
	
	printf("soma de 3 numeros inteiros\n");
	printf("insira numero x:\n");
		scanf("%d", &x);
	printf("insira numero y\n");
		scanf("%d", &y);
	printf("insira numero z\n");
		scanf("%d", &z);
	
	//resultado
	
	result = x + y + z;
	printf ("resultado: %d\n", result);
	
	system ("pause");
	return 0;
}
