/*Algoritmo que pida al usuario el número de cifras de un número para generarlo de forma aleatoria. La cifra más significativa no puede ser 0.*//*5.4.7*/
/*También muestra el número de veces que se invoca cada función generadora*/

#include <stdio.h>          //Librería para printf() y scanf()
#include <stdlib.h>         //Librería para rand()
#include <time.h>           //Librería para time()

void funcion_3cifras(void); //Funciones que no devuelven valores ni tienen parámetros de entrada.
void funcion_2cifras(void);
void funcion_1cifra(void);


int main()
{
    int cifras;
    int llamada1=0;
    int llamada2=0;
    int llamada3=0;
    
    do{                                         //El bucle nos garantiza no introducir una cifra 0 ni cifras negativas.
        printf("Introduzca el número de cifas del número a generar\n");
        scanf("%d",&cifras);
    }while(cifras<=0);
    
    srand(time(NULL));                          //Función para el cálculo de la fecha/hora del sistema. No hay que llamarla más veces. 
    printf("%d",rand()%(9)+1);                  //Imprimimos la cifra más significativa del número, que no puede ser 0.
    cifras-=1;                                  //Ya tenemos una cifra generada.
    
    while(cifras>0){                            //El bucle se ejecutará hasta que completemos todas las cifras del número a generar.
        if(cifras>=3){                          //Si quedan 3 o más cifras por rellenar, ejecutaremos esta función
            funcion_3cifras();                  //Invocamos la función que genera 3 cifras aleatorias.
            cifras-=3;                          //Hemos completado 3 cifras. 
            
            llamada3++;                         //Registramos una llamada a la función.
        }
        else if((cifras>1)&&(cifras<3)){        //Si quedan menos de 3 cifras y más de 1 por rellenar, ejecutaremos esta función.
            funcion_2cifras();                  //Invocamos la función que genera 2 cifras aleatorias.
            cifras-=2;                          //Hemos completado 2 cifras.
            
            llamada2++;                         //Registramos una llamada a la función.
        }
        else{                                   //Si queda 1 cifra por rellenar, ejecutaremos esta función.
            funcion_1cifra();                   //Invocamos la función que genera 1 cifra aleatoria.
            cifras-=1;                          //Hemos completado 1 cifras.
            
            llamada1++;                         //Registramos una llamada a la función.
        }
    }
    printf("\nLlamadas a función3: %d| LLamadas a función2: %d| Llamadas a función1: %d|\n",llamada3,llamada2,llamada1); //Una vez creamos todas las cifras. 
    return 0;                                   //Valor de retorno de la función main().
}

void funcion_3cifras(void){
    int i;                                      //Contador de cifras
    for(i=1;i<=3;i++){                          //Se ejecutará 3 veces, ya que tenemos que generar 3 cifras. 
        printf("%d",rand()%10);                 //Imprimimos cada cifra sin saltos de línea ni espacios. 
    }
}

void funcion_2cifras(void){
    int numero,i;
    for(i=1;i<=2;i++){                          //Se ejecutará 2 veces, ya que tenemos que generar 2 cifras. 
        printf("%d",rand()%10);
    }
}

void funcion_1cifra(void){
    printf("%d",rand()%10);
}
