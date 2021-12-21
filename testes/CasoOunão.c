#include<stdio.h>
/*
*Autor: Felipe Falcão
*Data:  21/12/2021/
*
**/
int main(){

  char nome[50], sexo, estadoCivil;
  int anos;

  printf("Qual o nome? ");
  gets(nome);//scanf("%s",nome);

  printf("Qual o seu sexo (M/F)? ");
  sexo = getchar();
  setbuf(stdin, NULL);

  printf("Qual o seu estado civil (S/C)? ");
  estadoCivil = getchar();

  if((estadoCivil == 'c' || estadoCivil == 'C') && (sexo == 'f' || sexo == 'F')){
      puts("Quantos anos de casada? ");
      scanf("%d",&anos);
  }else{
      puts("Quantos anos de casado? ");
      scanf("%d",&anos);
  }
    printf("Nome: %s\nSexo: %c\nEstado Civil: %c\n",nome,sexo,estadoCivil);
    printf("Anos de casado: %d\n\n",anos);





}
