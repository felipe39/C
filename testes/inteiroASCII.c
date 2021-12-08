#include<stdio.h>

int main(){

  int numero;

  printf("Digite um número: ");
  scanf("%d",&numero);

  printf("O número %d tem o caractere ASCII %c\n",numero, (char)numero);
  printf("O caractere seguinte '%c' tem o ASCII n° %d\n",(char)(numero+1),(numero+1));
}
