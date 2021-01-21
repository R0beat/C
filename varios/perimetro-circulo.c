#include <stdio.h> //Esta es una libreria
main(){//Método main (el cuerpo de nuestro programa
float per,r; //Declarando Variables en este caso flotantes(decimales) 

printf("Ingresa el radio del Circulo\n");//Pidiendo datos al usuario
scanf("%f",&r);//Leyendo datos 
per=(2*3.14) * r; //En esta variable se almacenará la operación 
printf("El perimetro del Circulo es : %f",per); //Impre el resultado
system("pause");//Hace una pausa en el ejecutable 
}
