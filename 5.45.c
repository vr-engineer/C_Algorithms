#include <stdio.h>

void generar_primo(int);    //función que no devuelve ningun valor
                            //y tiene un parámetro de entrada 

int main()
{
    int n1,n2;      //intervalo
    
    printf("Introduzca el intervalo de números primos que quiere saber\n");
    printf("en formato [n1,n2]\n");
    scanf("[%d,%d]",&n1,&n2);

    /*Establecemos un bucle para que calcule el primo desde n1 hasta n2*/
    do{
        generar_primo(n1);  //Invocamos la función y le pasamos el valor n1
                            //Inicialmente, el valor n1 es el primer límite
                            //del intervalo. A partir de él, la función tiene
                            //que calcular los primos. Los de fuera del intervalo
                            //no interesan. 
        n1++;   //Pasamos al siguiente número comprendido dentro del intervalo. 
    }while(n1<=n2);         //El bucle finaliza al llegar a n2
    
    return 0;               
}

void generar_primo(int numero){     //El valor de n1 se copia a numero
    int i=2;    //divisor
     
    while(((numero%i)!=0)&&i<numero){   //divide numero hasta que el resto sea 0
                                        //o hasta que dividendo sea igual al divisor
                                        //Si el resto es 0 el número no es primo. 
        i++;    //Dividimos por el siguiente número
    }
    if(i==numero){                      //Un primo solo es divisible por el mismo
        printf("%d\n",numero);          //Imprimimos el primo
    }
    
    //Si el n1 osease numero no es primo, no se imprime.
return;     //La función es de tipo void, no devuelve ningun valor
}