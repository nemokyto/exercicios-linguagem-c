#include <stdio.h>
#include <stdlib.h>

//5. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s(metros por segundo).

int main () {
	
	//variáveis
	
	float K;
	float M;
	
	//atribuição
	
	printf ("leitor de velocidade em km/h para m/s\n");
	printf ("informe a velocidade em km/h: ");
	scanf ("%f", &K);
	
	//conversão
	
	M = K/3.6;
	if (K > 0) {
		printf ("\n%1.f km/h equivale a %1.f m/s\n", K , M);
	}
	else {
		printf ("\nvelocidade negativa.\n");
	}
	
	system ("pause");
	return 0;
}
