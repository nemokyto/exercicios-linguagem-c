#include <stdio.h>
#include <stdlib.h>

// 9.A import�ncia de R$780.000,00 ser� dividida entre tr�s ganhadores de um concurso. Sendo que da quantia total:
// -O primeiro ganhador receber� 46%;
// -O segundo receber� 32%;
// -O terceiro receber� o restante (22%).
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

int main () {
	
	//vari�veis
	const float importancia = 780.000;
	float x;
	float y;
	float z;
	
	//calculo 
	
	x=46*780.000;
	y=32*780.000;
	z=22*780.000;
	
	printf("o ganhador um ficaraa com a quantia de R$ %.2f\n", x);
	printf("o ganhador dois ficaraa com a quantia de R$ %.2f\n", y);
	printf("o ganhador tres ficaraa com a quantia de R$ %.2f\n", z);
	
	system("pause");
	return 0;
}
