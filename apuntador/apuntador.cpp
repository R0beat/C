#include <iostream>

using namespace std;
int main() {
	printf("\n");
		
	int x = 23;
    cout << "La direccion de memoria es: "<< &x << endl;
    cout << "El valor de la variable es: "<< x << endl;
	/*
	float *p;
	cout << "El valor apuntado por p es: " << *p << endl; // Incorrecto
	*p = 3.5; // Incorrecto

	float n1 = 3.5; //Correcto
	float *p = &n1;
	cout << "El valor apuntado por p es: " << *p << endl; // Correcto
	*/
    return 0;

}