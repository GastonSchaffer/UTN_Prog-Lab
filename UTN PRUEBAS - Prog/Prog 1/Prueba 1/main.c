#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 10;          //numeros enteros
    float altura = 1.75;    //numeros con coma
    char sexo = 'f';        //para caracteres

                            // \n = es un "enter"
                            //  'comillas simples son un solo caracter'
                            //  "comillas dobles son una cadena de caracteres"

    printf ("%d \n\n", edad);      //mascara tipo enteros decimales
    printf ("%.1f \n\n", altura);  //mascara tipo float
    printf ("%c \n\n", sexo);      //mascara tipo char

//                        -----------------------------------------
    printf ("Usted tiene %d anios y mide %.2f metros de altura \n\n", edad, altura); //las variables van en orden con respecto a el orden que se quieren mostrar las mascaras
//                                          ------------------------------

    return 0;
}
