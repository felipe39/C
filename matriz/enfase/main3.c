#include<stdio.h>
/*
*Faça um algoritmo que leia dados e armazene em uma matriz 3x3
*de números inteiros. Em seguida, mostre os elementos que sejam
iguais ao maior número armazenado na matriz.
**/
int main(){

  int mat[3][3],lin, col,maior=0,contigual=0;

printf ("\nDigite valor para os elementos da matriz\n\n"); for ( lin=0; lin<3; lin++ )

for ( col=0; col<3; col++ )

{

printf ("Elemento[%d][%d] = ", lin, col);

scanf ("%d", &mat[lin][col]);

if (mat[lin][col]>maior)

{

maior=mat[lin][col];

contigual=1;

}

else

if (mat[lin][col]==maior)

contigual++;

}

printf("\n Maior: %d ",maior);

printf("\n Ocorrenias do maior: %d ",contigual);

}
