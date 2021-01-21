#include <stdio.h>

main(){
int h,m,s;

printf("Convierte de horas a segundos\n");
printf("Ingrese la hora ");
scanf("%d",&h);
printf("Ingrese los minutos ");
scanf("%d",&m);
printf("La hora a convertir es %d : %d\n",h,m);
s = ((h*3600)+(m*60));
printf("Los segundos son %d\n",s);

system("pause");
}
