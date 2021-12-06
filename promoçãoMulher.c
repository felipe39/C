#include<stdio.h>
/*
*Autor: Felipe falcão
*
*Data: 05/12/2021
*
*Programa que lê nome, sexo, valor da compra, calcula e mostra resultado
*baseado em 5% para os homens e 13% para as mulhesres.
*******/
int main(){
  char sexo;
  float desconto, valor;
  desconto = valor = 0;

    printf("Qual o valor?: ");
    scanf("%f",&valor);

    printf("Qual o sexo? ");
    scanf(" %c",&sexo);

  if(valor >= 100){
    if((sexo == 'm') || (sexo == 'M'))
      desconto = (valor*5/100);
    else{
      if((sexo == 'f') || (sexo == 'F'))
        desconto = (valor*13/100);
    }
  }
  printf(" Valor da compra ....= %.2f\n ",valor);
  printf("Desconto ...........= %.2f\n ",desconto);
  printf("Compra com desconto = %.2f\n ",valor-desconto);
}
