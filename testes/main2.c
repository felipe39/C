#include<stdio.h>
#include<stdlib.h>
/*
*Autor: Felipe Falcão
*Data:  16/12/2021
*
*Programa que lê três notas e calcula a media
***/
int main(){

  float nota1, nota2, nota3, media;
  media = 0;
  char resposta = 's';

    while(resposta == 's') //Quantidade de vezes indeterminada
    {
      system("cls");
      printf("Digite a primeira nota: ");//Bloco de entrada de dados
      scanf("%f",&nota1);
      printf("Digite a segunda nota: ");
      scanf("%f",&nota2);
      printf("Digite a terceira nota: ");
      scanf("%f",&nota3);

      media = (nota1 + nota2 + nota3) / 3;//Processamento de dados

      if(media >= 7)                      //Condicional
        printf("Aprovado!\n");
      else{
        printf("Reprovado.\n");
      }

      printf("A media do aluno foi: %f\n\n",media);

      /*Caractere que vai determinar se o laço continua ou não.*/
      printf("Deseja digitar nota de outro aluno (s/n)? ");
      //resposta = getchar();
      scanf(" %c",&resposta);
    }
    return 0;
}
