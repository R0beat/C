#include <stdio.h>

int main(){
int i=1,j;
char opc;
	printf("Este prgrama incrementa de 5 en 5 hasta 100 o decrementa de 3 en 3 hasta 0 y lo duplica\n");
	printf("a Incrementa\nb Decrementa\n");
	scanf("%s",&opc);
switch(opc){
		case 'a':
			printf("Ingresa un numero:\n");
			scanf("%d",&i);
			while(i<=100){
				printf("%d\n",i);
				i+=5;
				
			}
			j=(i-5)*2;
			printf("El valor del numero es: %d\n",j);	
	break;
	case 'b':
			printf("Ingresa un numero:\n");
			scanf("%d",&i);
			while(i>=0){
				printf("%d\n",i);
				i-=3;
				
			}
			j=(i+3)*2;
			printf("El valor del numero es: %d\n",j);	
	break;
	default:
		printf("Opcion no valida");	
	break;
}
system("pause");
}
