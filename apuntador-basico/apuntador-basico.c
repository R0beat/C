#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1 = 10; //Declarando la variable
	int * apuntador = &n1; //Declarando el apuntador del mismo tipo de la variable
	printf("\n");
	printf("El valor de la varible es : %d",n1);
	printf("\nLa direccion de la varible es: %p",n1);
	printf("\n");
	printf("\nLa direccion del apuntador es: %p",* apuntador);

    * apuntador =  50; //Cambiando el valor de la variable

    printf("\nEl valor de la varible es : %d",n1); 
	printf("\n");
	return 0;
}