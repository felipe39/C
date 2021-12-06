#include<stdio.h>
/ *
 * @author Falcão
* @Data 4 / 12 / 21 de
 *
 * Programa que ler números e soma com 3, e mostra o resultado em seguida*/. 
int main(){
   int numero, result, i;

   i = 0;
   while(i < 5){
     
     printf("Digite um número: ");
     scanf("%d",&numero);
     result = numero + 3;
     printf("O resultado foi: %d \n",result);
     i++;
   }

}
