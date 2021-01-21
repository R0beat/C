#include <stdio.h>

int main(){
int i,j;
float tot;
printf("Este programa divide 2 numeros\n");
printf("Ingresa dividendo: ");
scanf("%d",&j);
printf("Ingresa el divisor: ");
scanf("%d",&i);
if(i==0){
	printf("Imposible realizar la division!!!");
}
tot=j/i;

printf("El resultado es: %f",tot);

system("pause");
}
