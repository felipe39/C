#include<stdio.h>
/*
*Autor: Felipe Falcão
*Data:  08/12/2021
*Programa que lê dados inteiros e armazena-os em uma matriz 3x4. Depois
*Mostra a quantidade de números pares e ímpares armazenados na matriz.
*********/
int main(){
  const int l = 3, c = 4;
  int impar,par,linha, coluna, matriz[l][c];
  impar = par = 0;

    for(linha = 0; linha <= l; linha++)
    {
      for(coluna = 0; coluna <= c; coluna ++)
      {
        scanf("%d",&matriz[linha][coluna]);
        if(matriz[linha][coluna]%2 == 0)
          par = par + 1;
        else
          impar = impar + 1;


    }
  }
  printf("Números pares digitados:   %d \n",par);
  printf("Números ímpares digitados: %d \n",impar);
}
