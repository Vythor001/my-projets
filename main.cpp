#include <stdio.h>
#include <stdlib.h>

void ad (int x, int y){
int valor;
valor=x+y;
printf("\nO valor da adicao e:%d\n",valor);
}

void sub(int x,int y){
int valor;
valor=x-y;
printf("\nO valor da subtracao e:%d\n",valor);
}

void mu (int x,int y){
int valor;
valor=x*y;
printf("O valor da multiplicacao e:%d",valor);
}

void di (int x,int y){
int valor;
if (x==0 || y==0){
    printf("\n 0 nao e divisivel");
}
valor=x/y;
printf("\nO valor da adicao e:%d",valor);
}



int main(){
int x,y;
char escolha;
printf("\nEscolha a operação 'A'=Adicao 'S'=Subtracao 'D'=divisao e 'M'=Multiplicacao\n");
scanf("%c",&escolha);
printf("\nDigite o valor o primeiro valor:");
scanf("%d",&x);
printf("\nDigite o valor o segundo valor:");
scanf("%d",&y);
switch (escolha){
case 'A':
ad(x,y);
break;
case 'S':
sub(x,y);
break;
case 'D':
mu(x,y);
break;
case 'M':
di(x,y);
break;
default:
printf("Valor incorreto");
break;
}
return 0;
}
