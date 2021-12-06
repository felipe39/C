#include<stdio.h>
/*Obtive auxilio do vídeo da facul
*Autor: Felipe falcão
*
*Data: 06/12/2021
*
*Código que lê notas de 20 alunos da turma e mostra as que são iguais
*ou superiores à média da turma
*******************************/
int main(){
  const int tamanho = 6; /*Contante que determina um tamanho fixo.
  Posso usar esse valor nas partes em que o número se repete como por exemplo,
  se o vetor for 20, posso criar uma constante de tamanho 20 para colocar nessas partes
  do código e quando eu precisar mudar o número, só preciso modificar na constante e
  todo o restante do código que tiver essa constante será alterado também*/
  float notas[tamanho], media, soma; int posicao;
  soma = media = 0;

  for(posicao = 0; posicao <= tamanho; posicao++)
  {
      scanf("%f",&notas[posicao]);
      soma = soma + notas[posicao];
  }
  media = soma/tamanho;
  for(posicao = 0; posicao <= tamanho; posicao++)
  {
     if(notas[posicao] >= media)
        printf("%.2f \n",notas[posicao]);
  }
}
