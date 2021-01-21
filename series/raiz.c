//Este programa realiza el método de la posición falsa para calcular la raíz real
//Realizado por José Manuel González Arriaga
//Número de control: 201926040
//Grupo: 6302
#include<stdio.h>
#include<math.h>
float f(float x)//funcion decimal x
{
	
    return pow(x,2) - 18;potencia//regresa potencia x^2
}

int regula (float *x, float x0, float x1, float fx0, float fx1, int *itr)//parametros, regula decimal xr, x0, x1, fx0, fx1, itr


{
	float et,ea;//decimal ET, EA
    *x = x0 - ((x1 - x0) / f(x1 - fx0))*fx0;//xr
    et =  ((sqrt(18) - *x) / sqrt(18))*100;//et
    ++(*itr);//iterador
    printf("|  %d  |  %.2f  |  %.2f  |  %.2f  |  %.2f  |\n", *itr,x0,x1,*x,et);//imprime iterador, x0, x1, xr, et

}
int main (){//inicio
    int itr = 0, maxmitr;//entero iterador=0, maxmitr
    float x0,x1,x2,x3,allerr;//decimal x0, x1, x2, x3, allerr
    printf("\nIngresa valores\n");//imprime "ingresa valores"
    printf("\nxi: ");//imprime "xi"
    scanf("%f",&x0);//lee "x0"
    printf("\nxu: ");//imprime "xu"
    scanf("%f",&x1);//lee "x1"
    printf("\net: ");//imprime "et"
    scanf("%f",&allerr);//lee "allerr"
    printf("\niteraciones: ");//imprime "iteraciones "
    scanf("%d",&maxmitr);//lee "maxmitr"
    printf("\nf(x)=x^2-18\t f(xi)= %.2f\tf(xu)= %.2f\n",f(x0),f(x1));//imprime la funcion f agrega valor xi, xu
    printf("___________________________________________\n");//imprime " \n"
    printf("Iteracion   xi \t     xu\t     xr\t     et\n");//imprime parametros, tabulacion
    regula (&x2, x0, x1, f(x0), f(x1), &itr);//regula "&x2, x0, x1, f(x), f(x1), &itr"
    
    do//has esto 
    {
        if (f(x0)*f(x2) < 0){//si (f(x0)*f(x2) < 0)

            x1=x2;//x1=x2
        }
        else{//si no
            x0=x2;//x0=x2
        }
        regula (&x3, x0, x1, f(x0), f(x1), &itr);//regula "&x3, x0, x1, f(x0), f(x1),&itr"
        if (fabs(x3-x2) < allerr)//si valor absoluta decimal "x3-x2 < allerr"
        {
        	printf("___________________________________________\n");//imprime " \n"
            printf("\nDespues de %d iteraciones, ea = %.2f\t raiz aproximada= %.2f\t", itr, allerr, x3);//imprime" despues de n iteraciones, ea= n, raiz aproximada=n"
            return 0;//regresa 0
        }
        x2=x3;//x2=x3
    } while (itr<maxmitr);//mientras
    printf("No es la solucion o las iteraciones no son suficientes\n");//imprime "No es la solucion o las iteraciones no son suficientes"
    return 1;//regresa 1
}//fin if
//fin while
//fin