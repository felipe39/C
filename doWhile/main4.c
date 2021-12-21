#include<stdio.h>
  /*
  *
  *Programa que lÊ números inteiros e pergunta se o usuário deseja digitar
  *outro número, se sim, ele fica dentro do laço, senão ele sai fora e
  *calcula a média
  ***/
  int main(){
    int numero, soma, quantidadeLido;
    float media;
    media = soma = 0;
    char resposta = 's';

      while(resposta == 's')
      {
        printf("Digite um numero: ");
        scanf("%d",&numero);

        soma = soma + numero; //soma+=numero;
        quantidadeLido++;

        printf("Deseja digitar outro numero: (S/N)? ");
        scanf(" %c",&resposta);
        //resposta = _getche();
      }

      media = ((float)soma / (float)quantidadeLido);
      printf("Media = %d.\n",media);

      return 0;
}
