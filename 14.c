#include <stdio.h>
#include <stdlib.h>


/*A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10, respectivamente, a um trabalho de 
laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de
Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9),
de recupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verifica��es necess�rias.*/

int main() {
    
    // vari�veis
    
    float notaLab, notaAv, notaFinal;
    int media;
    
    // info
    
    printf("Informe a nota do Trabalho de Laboratorio: ");
        scanf("%f", &notaLab);
    printf("\nInforme a nota da Avaliacao Semestral : ");
        scanf("%f", &notaAv);
    printf("\nInforme a nota do Exame Final: ");
        scanf("%f", &notaFinal);
        
    // c�lculo
   
    media = ((notaLab*2)+(notaAv*3)+(notaFinal*5))/10;
    
    // condi��es
    
    if (media >= 0 && media <= 2.9) {
        printf("Reprovado.");
    }
    else if (media >= 3 && media <= 4.9) {
        printf("Recuperacao.");
    }
    else if (media >= 5 && media <= 10) {
        printf("Aprovado.");
    }
    else if (media < 0 || media > 10) {
        printf("?");
    }
    
    system("pause");
    return 0;

}

