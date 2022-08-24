#include<stdio.h>
#include<stdlib.h>
int main()
{
 //declaração de variaveis
 float nota1;
 float nota2;
 float media;

 //entrada
 printf("digite a nota 1 : ");
 scanf("%f",&nota1);
 printf("digite a nota 2 : ");
 scanf("%f",&nota2);

 //processamento
 media=(nota1+nota2)/2;

 //criticar para saber se o aluno foi aprovado ou retido

 //saida
 if (media >= 5)
 {
printf("Aprovado!!");
 }
 else
 {
     printf("aluno devera cursar dp");
 }
 return 0;

}



