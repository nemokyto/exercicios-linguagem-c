#include <stdio.h>
#include <stdlib.h>

// 1.Faça um programa que leia um número inteiro e o imprima.

int main () {
	
	int x;

	scanf ("%d", &x);
		if (x >= 0 ) {
			printf ("\ninteiro: %d\n", x);
		}
		else {
			printf ("\ninvalido.\n");
		}
	
	system ("pause");
	return 0;
	
}

