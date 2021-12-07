#include<stdio.h>
/*
*Autor: Felipe Falcão
*Data:  07/12/2021
*
*
*Programa que mostra o ASCII do caractere
******/
int main(){
  char ch;
  printf("Introduza um caractere: ");
  ch = getchar();
  printf("O caractere '%c' tem o ASCII n° %d\n", ch, (int)ch);
}
