#include <stdio.h>
#include <stdlib.h>

//4.Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit

int main () {
	
	//vari�veis
	
	float C;
	float F;
	
	//atribui��o
	
	printf ("conversor de graus celsius para graus fahrenheit\n");
	printf ("informe a temperatura: ");
	scanf ("%f", &C);
	
	//convers�o
	
	F = C*(9.0/5.0)+32.0;
	printf ("\na temperatura de %2.f celsius em fahrenheint: %.2f \n", C , F);
	
	system ("pause");
	return 0;
}
