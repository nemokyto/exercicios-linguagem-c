#include <stdio.h>
#include <stdlib.h>

// 8. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.

int main() {
	
const float p = 3.141592;
float r;
float a;
float d;
// atribuição

printf("informe o raio do circulo:\n");
	scanf("%f", &r);

// calculo

a = p*(r*r);
d = r+r;

printf("considerando pi como: 3.141592...\n");
printf("\na area correspondente do circulo: %.2f\n", a);
printf("diametro do circulo: %.2f\n", d);
printf ("\nindependentemente da unidade de medida.\n");

system("pause");
return 0;
	
}


