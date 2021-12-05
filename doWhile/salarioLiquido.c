#include<stdio.h>
/ *
 * @author Falcão
 * @data 3/12/21
 *
 *Programa que recebe salario bruto, calcula salario liquido e mostra no final. 
 */
int main() {

  int i = 1;
  float salbruto, salliquido, imposto, totbruto, totliquido, totimposto;
  totbruto = totliquido = totimposto = 0;

  do{

    printf("Introduza o salario bruto: ");
    scanf("%f",&salbruto);

    if(salbruto > 999)
      imposto = salbruto * 0.10;
    else
      if(salbruto > 1999)
        imposto = salbruto * 0.15;
      else
        if(salbruto > 9999)
          imposto = salbruto * 0.20;
        else
          if(salbruto > 99999)
            imposto = salbruto * 0.25;
          else
            imposto = salbruto * 0.30;

    salliquido = salbruto - imposto;
    printf("Salario liquido: %.2f\n",salliquido);

    totbruto = totbruto + salbruto;
    totliquido = totliquido + salliquido;
    totimposto = totimposto + imposto;

    i++;

  }while(i <= 2);
    printf("TOT salario bruto   = %.2f\n",totbruto);
    printf("TOT salario liquido = %.2f\n",totliquido);
    printf("TOT imposto         = %.2f\n",totimposto);

  return 0;
}
