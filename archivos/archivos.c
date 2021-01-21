#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo; //Declaras un apuntador de tipo File
	char caracter;
	
	archivo = fopen("prueba.txt","r"); //Esta función sirve para abrir y crear ficheros en disco.
	
	if (archivo == NULL) { //Si el archvo no se encuentra imprime un mensaje de error
        	printf("\nError de apertura del archivo. \n\n");
        }
        else {
        		// fgetc = Esta función lee un caracter a la vez del archivo que esta siendo señalado con el puntero *archivo
	            printf("\nEl contenido del archivo de prueba es: \n\n");
	            while((caracter = fgetc(archivo)) != EOF) { //hasta que encuentre el final del archivo (EOF)
					printf("%c",caracter);
		    	}
        }

    printf("\n");
    fclose(archivo); //Cerrar el archivo utilizando la función fclose
return 0;
}

/*
"r" : abrir un archivo para lectura, el fichero debe existir.
"w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
*/	