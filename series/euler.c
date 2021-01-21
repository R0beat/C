#include <stdio.h>

int main()
{
	int alto,i=2;
	printf("Este programa imprime una sucesion numerica\n");
	printf("e^-x = 1-x + x^2/2!+x^3/3!+x^4/4!...\n");
	printf("Ingresa el limite de la sucesion: ");
	scanf("%d",&alto);
	printf("e^-x = 1-x + "); //1
	while (i <= alto )
	{
		printf("x^%d",i);//2
		printf("/%d! + ",i);//3
		i++;//i += 1
	}
}