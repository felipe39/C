#include<stdio.h>
/*
*Autor: Felipe falcão
*
*Data: 06/12/2021
*
*Código que lê notas de 20 alunos da turma e mostra as que são iguais
*ou superiores à média da turma
*******************************/
int main(){
  float notas[6],alunos[2], media, soma, notaSuperior;
  soma = media = notaSuperior = 0;

  for(int posicao = 0; posicao <= 6; posicao++){
    printf("Digite a nota do aluno: ");
    scanf("%f",&notas[posicao]);

      if(notas[posicao] > notaSuperior){
        notaSuperior = notas[posicao];
      }
    soma = soma + notas[posicao];
  }
  media = soma/6;

      printf("Nota = %.2f\nMedia = %.2f\n\n",notaSuperior, media);

    if(notaSuperior >= media){
      if(notaSuperior > media)
        printf("A nota é superior a media.\n");
      else{
        if(notaSuperior == media)
          printf("Nota superior é igual a media.\n");
      }
   }
}
