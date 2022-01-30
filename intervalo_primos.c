/*Introduce un intervalo [n,n] y el algoritmo te devolverá el listado de números primos que pertenecen a ese intervalo*//*5.4.5*/

#include <stdio.h>           //Librería para las funciones printf() y scanf().

void generar_primo(int);    //Función que no devuelve ningun valor y tiene un parámetro de entrada de tipo entero.                        

int main()                  
{
    int n1,n2;              //Intervalo [n1,n2].
    
    do{                     //Con este bucle garantizamos que el intervalo está bien escrito. Si no lo está, nos vuelve a pedir escribirlo.
    printf("Introduzca el intervalo para saber qué números primos hay en él,\n");
    printf("en formato n1,n2: ");
    scanf("%d,%d",&n1,&n2); 
    }while(n2<n1);

    /*Establecemos un bucle para que calcule el primo desde n1 hasta n2*/
    do{
        generar_primo(n1);  //Invocamos la función y le pasamos el valor n1.
                            //Inicialmente, el valor n1 es el primer límite
                            //del intervalo. A partir de él, la función tiene
                            //que calcular los primos.
                            //Los anteriores no interesan. 
        n1++;               //Pasamos al siguiente número comprendido dentro del intervalo. 
    }while(n1<=n2);         //El bucle finaliza al llegar a n2.
    
    return 0;               //Valor entero que devuelve la función main()         
}

void generar_primo(int numero){         //El valor de n1 se copia a la variable numero.
    int i=2;                            //Divisor.
     
    while(((numero%i)!=0)&&i<numero){   //Divide numero hasta que el resto sea 0
                                        //o hasta que dividendo sea igual al divisor
                                        //Si el resto es 0 el número no es primo. 
        i++;                            //Dividimos por el siguiente número.
    }
    if(i==numero){                      //Un primo solo es divisible por el mismo.
        printf("%d\n",numero);          //Imprimimos el primo.
    }
    
                                        //Si n1, o sea, numero no es primo, no se imprime.
return;                                 //La función es de tipo void, no devuelve ningun valor.
}

