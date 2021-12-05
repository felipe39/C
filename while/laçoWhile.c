#include<stdio.h>

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
