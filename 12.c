#include <stdio.h>
#include <stdlib.h>

/* 12. Fa�a um programa que leia 2 notas de um aluno, verifique se as notas s�o v�lidas e exiba na tela a m�dia destas notas. Uma nota v�lida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o programa termina */ 

int main () {
	
	// vari�veis
	
	float n1, n2, media;
	int confirm1, confirm2;
	
	// info
	
	printf("Insira a nota 1:\n");
		scanf("%f", &n1); 
	printf("Insira a nota 2: \n");
		scanf("%f", &n2);
	
	confirm1 = 0;
	confirm2 = 0;
	//condi��es
	
	if (n1 >= 0.0 && n1 <= 10.0) {
		confirm1 = 1;
	}
	if (n2 >= 0.0 && n2 <= 10.0 ) {
		confirm2 = 1;
	}
	if (confirm1 == 1 && confirm2 == 1) {
				media = (n1 + n2)/2.0;
				printf("Media: %1.f\n", media);
			}
			else if (confirm1 != 1 || confirm2 != 1) {
				printf("Invalido.\n");
			}
	
	system("pause");
	return 0;
}


