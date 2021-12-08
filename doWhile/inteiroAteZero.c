#include<stdio.h>

int main(){
  int numero, somaPositivo, somaNegativo;
  somaPositivo = somaNegativo = 0;

    do{

      scanf("%d",&numero);
      if(numero > 0)
        somaPositivo = somaPositivo + numero;
      else
        somaNegativo = somaNegativo + numero;

    }while(numero != 0);

    printf("Soma dos número positivos:  %d\n",somaPositivo);
    printf("SOma dos números negativos: %d\n",somaNegativo);
}
