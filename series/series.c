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
	printf("cos x = 1 - x^2/2!+x^4/4!+x^6/6!...\n");
	printf("Ingresa el valor de el limite de la sucesion: ");
	scanf("%d",&limite);
	printf("cos x = 1 - "); 
	while (contador <= limite )
	{
		printf("x^%d",contador);
		printf("/%d! + ",contador);
		i += 2;
	}
}