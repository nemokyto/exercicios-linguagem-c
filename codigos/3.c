#include <stdio.h>
#include <stdlib.h>

// 3. Desenvolva um algoritmo em C que leia um número inteiro e imprima o seu antecessor e seu sucessor.

int main () {
	
	int x;
	
	//números
	
		printf ("informe um numero:");
		scanf ("%d", &x);
		printf ("\no antecessor de %d e %d, e seu sucessor e %d.", x , x++ , x-- + 1); //<<<< não entendi porquê tá ao contrário lol
	
	system ("pause");
	return 0;
}
