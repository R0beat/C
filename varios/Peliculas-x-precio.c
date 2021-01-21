#include <stdio.h>

int main(){
int i,val,pago,total;
char opc;
	printf("Bienvenido Selecciona una de pelicula de la cartelera\n");
	printf("1.-Coco\n2.-Liga de la Justicia\n3.-Eso\n4.-Anabell\n5.-El conjuro\n");
	scanf("%s",&opc);
switch(opc){
	case '1':
		printf("Has elegido Coco el precio de la entrada es de $45.00\n");
		printf("Cuantas entradas deseas?\n");
		scanf("%d",&i);
		val=i*45;
		printf("EL precio es de $ %d\n",val);
		printf("Pago: $");
		scanf("%d",&pago);
		total=pago-val;
		printf("Tu cambio es de $ %d\n",total);
		
	break;
	case '2':
		printf("Has elegido La Liga de la Justica el precio de la entrada es de $40.00\n");
		printf("Cuantas entradas deseas?\n");
		scanf("%d",&i);
		val=i*40;
		printf("EL precio es de $ %d\n",val);
		printf("Pago: $");
		scanf("%d",&pago);
		total=pago-val;
		printf("Tu cambio es de $ %d\n",total);
	break;
	case '3':
		printf("Has elegido IT el precio de la entrada es de $50.00\n");
		printf("Cuantas entradas deseas?\n");
		scanf("%d",&i);
		val=i*50;
		printf("EL precio es de $ %d\n",val);
		printf("Pago: $");
		scanf("%d",&pago);
		total=pago-val;
		printf("Tu cambio es de $ %d\n",total);	
	break;
	case '4':
		printf("Has elegido Anabell el precio de la entrada es de $48.00\n");
		printf("Cuantas entradas deseas?\n");
		scanf("%d",&i);
		val=i*48;
		printf("EL precio es de $ %d\n",val);
		printf("Pago: $");
		scanf("%d",&pago);
		total=pago-val;
		printf("Tu cambio es de $ %d\n",total);		
	break;
	case '5':
		printf("Has elegido El Conjuro el precio de la entrada es de $55.00\n");
		printf("Cuantas entradas deseas?\n");
		scanf("%d",&i);
		val=i*55;
		printf("EL precio es de $ %d\n",val);
		printf("Pago: $");
		scanf("%d",&pago);
		total=pago-val;
		printf("Tu cambio es de $ %d\n",total);		
	break;
	default:
		printf("Opcion no valida");	
	break;
}
system("pause");
}
