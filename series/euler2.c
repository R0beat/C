/*
Este programa imprime una sucesión numérica
Materia: Métodos Numéricos
Nombre: José Manuel González Arriaga
Matrícula: 201926040
Grupo: 6302
*/
#include <stdio.h>

int main()
{
	int limite,contador=2;
	printf("Este programa imprime una sucesion numerica\n");
	printf("e^-x = 1-x + x^2/2+x^3/3!+x^4/4...\n");
	printf("Ingresa el valor de el limite de la sucesion: ");
	scanf("%d",&limite);
	printf("e^-x = 1-x + "); 
	while (contador <= limite ) {	
		if(contador%2==0){
			printf("x^%d",contador);
			printf("/%d + ",contador);
		}
		else{// Es impar
			printf("x^%d",contador);
			printf("/%d! + ",contador);
		}// fin si	
		contador++;
	} 