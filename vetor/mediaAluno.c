#include<stdio.h>
/*
 *Autor: Felipe falcão
 *Data: 05/12/2021
 *
 *
 Programa que calcula e mostra a média do aluno com*/
int main(){
    float notas[5] = {0};
    float total = 0;
    float media = 0;

    for(int i = 1; i <= 5; i++){
    printf("Insira 5 notas: ");
    scanf("%f",&notas[i]);
    }
    for(int i = 1; i <= 5; i++){
      total = total + notas[i];
    }
    media = total/5;
    printf("%f media\n",media);
    printf("%f total\n",total);

}
