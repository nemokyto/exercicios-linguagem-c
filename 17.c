#include <stdio.h>
#include <stdlib.h>

/* Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela.*/

int main (){
    
    // variáveis

  float km, l, consumo;
  
  // info

  printf ("Informe quantos litros foram consumidos: ");
    scanf ("%f", &l);
  printf ("Informe a distancia pecorrida (em KM): ");
    scanf ("%f", &km);
    
    // cálculo

  consumo = km / l;
    
    // condições

  if (consumo < 8)
    {
      printf ("\nVenda o carro!");
    }

  else if (consumo >= 8 && consumo <= 12){
      printf ("\nEconomico.");
    }

  else if (consumo > 12){
      printf ("\nSuper Economico.");
    }
    
    
    system("pause");
    return 0;
}


