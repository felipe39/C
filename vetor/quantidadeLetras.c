#include<stdio.h>
/*
*Autor: Felipe falcão
*
*Data: 06/12/2021
*
******/
int main(){
  const int tamanho = 5;//constante com um valor fixo
  int i, posicao, vet[tamanho];//5 posições para 5 letras
  char letra;
  char nome[255];

  /*Vai inicializar todas as posições do vetor com zero*/
  for(i = 0; i <= 4; i++)
  {
    vet[i] = 0;
  }
  letra = getchar();
  //scanf("%c",&letra);

    /*Vai tertar se letra é diferente de z para poder entrar*/
    while(letra != 'z')
    {
      /*Comando caso, vai testar as possibilidades de letras que entrou
      no comando enquanto, while. Caso sejá 'a' faça tal coisa, nesse Caso
      vai ser incrementado certa posição do vetor.*/
      switch (letra)
      {
        case 'a':
          vet[0]++;
          break;
        case 'e':
          vet[1]++;
          break;
        case 'i':
          vet[2]++;
          break;
        case 'o':
          vet[3]++;
          break;
        case 'u':
          vet[4]++;
          break;
      }
      letra = getchar();//Vai digitar a letra até que sejá z
    }
    printf("Quantidade de cada vogal, em ordem: \n");
    /*Vai percorrer o vetor, imprimindo cada posição das 5 declaradas
    Essas posições contém a quantidade de letras incrementadas de declaradas
    vogal digitada*/
    for(posicao = 0; posicao <= 4; posicao++)
    {
      printf("%d. ",vet[posicao]);
    }

}
