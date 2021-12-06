#include<stdio.h>

int main(){
  const int tamanho = 5;//constante com um valor fixo
  int i, posicao, vet[tamanho];//5 posições para 5 letras
  char letra;
  char nome[255];

  for(i = 0; i <= 4; i++)
  {
    vet[i] = 0;
  }
  letra = getchar();
  //scanf("%c",&letra);

    while(letra != 'z')
    {
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
      letra = getchar();
    }
    printf("Quantidade de cada vogal, em ordem: \n");
    for(posicao = 0; posicao <= 4; posicao++)
    {
      printf("%d. ",vet[posicao]);
    }

}
