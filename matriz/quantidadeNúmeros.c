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
  printf("Digite o valor para o elemento da matriz.\n\n");
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
  printf("\n");
  printf("Pares:   %d \n",par);
  printf("Ímpares: %d \n",impar);
}

/*Código feito pelo professor:

#include<stdio.h>

int main(){

  int mat[3][4],lin, col,contpar=0,contimpar=0;
    printf ("\nDigite valor para os elementos da matriz\n\n");
    for ( lin=0; lin<3; lin++ )
      for ( col=0; col<4; col++ )
  {
    printf ("\nElemento[%d][%d] = ", lin, col);
    scanf ("%d", &mat[lin][col]);
  }
    printf("\n\n********* Saida de Dados ********* \n\n");
    for ( lin=0; lin<3; lin++ )
      for ( col=0; col<4; col++ )
  {
    if (mat[lin][col] % 2==0)
      contpar++;
      else
      contimpar++;
  }
  printf ("\nPares: %d ",contpar);
  printf ("\nImpares: %d ",contimpar);
}
*/
