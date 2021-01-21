#include <stdio.h>
#include <math.h>
#define et 0.05;

float f(float x){
	return -x*x+(1.8*x)+2.5;
	//
}
float fxi(float x){
	return (-2*x)+1.8;
}
int regla(float n,float fx,float fxi,float *x){

	*x = n -(fx / fxi);
	printf("Iteration no.  Xr = %7.3f \n",*x);
}
int main(int argc, char const *argv[])
{
	float x=5,x2;
	printf("El resultado de f(x) es: %.2f\n",f(x));
	printf("El resultado de f(xi) es: %.2f\n",fxi(x));
	regla(x,f(x),fxi(x));
	return 1;
}