#include <stdio.h>

int main(){
int d,h,m,s;
char opc;
	printf("Este programa convierte de Dias a Horas, Minutos y Segundos\n");
	printf("1.-Minutos\n2.-Horas\n3.-Segundos\n");
	scanf("%s",&opc);
switch(opc){
	case '1':
		printf("Has elegido Convertir dias a horas\n");
		printf("Ingresa los dias a convertir\n");
		scanf("%d",&d);
		h=d*24;
		printf("%d dia(s) tiene %d horas\n",d,h);
	break;
	case '2':
		printf("Has elegido Convertir dias a minutos\n");
		printf("Ingresa los dias a convertir\n");
		scanf("%d",&d);
		m=d*1440;
		printf("%d dia(s) tiene %d minutos\n",d,m);
	break;
	case '3':
		printf("Has elegido Convertir dias a segundos\n");
		printf("Ingresa los dias a convertir\n");
		scanf("%d",&d);
		s=d*86400;
		printf("%d dia(s) tiene %d minutos\n",d,s);	
	break;
	
	default:
		printf("Opcion no valida");	
	break;
}
system("pause");
}
