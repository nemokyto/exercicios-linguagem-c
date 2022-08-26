#include <stdio.h>
#include <stdlib.h>


/*A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de 
laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de
Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

int main() {
    
    // variáveis
    
    float notaLab, notaAv, notaFinal;
    int media;
    
    // info
    
    printf("Informe a nota do Trabalho de Laboratorio: ");
        scanf("%f", &notaLab);
    printf("\nInforme a nota da Avaliacao Semestral : ");
        scanf("%f", &notaAv);
    printf("\nInforme a nota do Exame Final: ");
        scanf("%f", &notaFinal);
        
    // cálculo
   
    media = ((notaLab*2)+(notaAv*3)+(notaFinal*5))/10;
    
    // condições
    
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

