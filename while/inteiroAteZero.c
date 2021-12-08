#include<stdio.h>

int main(){
  int numero, somaPositivo, somaNegativo;
  somaPositivo = somaNegativo = 0;

    scanf("%d",&numero);
    while(numero != 0)
    {
      if(numero > 0)
        somaPositivo = somaPositivo + numero;
      else
        somaNegativo = somaNegativo + numero;

      scanf("%d",&numero);
    }
    printf("Soma dos número positivos:  %d\n",somaPositivo);
    printf("SOma dos números negativos: %d\n",somaNegativo);
}
