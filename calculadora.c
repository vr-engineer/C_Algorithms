/*Diseñar una calculadora que haga las operaciones básicas con dos operandos*//*5.4.1*/

#include <stdio.h>

//DECLARACIÓN
float funcion_suma(float *,float *);				      //Dos parámetros de entrada de tipo puntero real
float funcion_resta(float *,float *);
float funcion_multiplicar(float *,float *);
float funcion_dividir(float *,float *);

int main()
{
    int opcion;										              //Variables locales de main()
    float o1,o2;
    float suma,resta,multiplicacion,division;
    
    do{												                  //Menú
        printf("****MENU****\n");
        printf("(1)-Suma\n");
        printf("(2)-Resta\n");
        printf("(3)-Multiplicación\n");
        printf("(4)-División\n");
        printf("(5)-Exit\n");
        printf("***********\n");
        scanf("%i",&opcion);
    }while((opcion<1)||(opcion>5));           //Si elegimos mal la opción, vuelve a salirnos el menú       
    
    switch(opcion){
        case 1:
            printf("Introduzca los valores a sumar (n+n)\n");
            scanf("%f+%f",&o1,&o2);
            suma=funcion_suma(&o1,&o2);       //INVOCACIÓN. Copia de direcciones
            printf("Suma=%.2f\n",suma);
            break;
        case 2:
            printf("Introduzca los valores a restar (n-n)\n");
            scanf("%f-%f",&o1,&o2);
            resta=funcion_resta(&o1,&o2);     //INVOCACIÓN. Copia de direcciones
            printf("Resta=%.2f\n",resta);
            break;
        case 3:
            printf("Introduzca los valores a multiplicar (n*n)\n");
            scanf("%f*%f",&o1,&o2);
            multiplicacion=funcion_multiplicar(&o1,&o2);  //INVOCACIÓN. Copia de direcciones
            printf("Producto=%.2f\n",multiplicacion);
            break;
        case 4:
            printf("Introduzca los valores a dividir (n/n)\n");
            scanf("%f/%f",&o1,&o2);
            division=funcion_dividir(&o1,&o2);  //INVOCACIÓN. Copia de direcciones
            printf("Producto=%.2f\n",division);
            break;
        default:
            return 0;
        
    }
    printf("\n¿Quiere hacer otra operación?\n");      //Menú 2
    printf("        |(6)SI|(7)NO|\n");
    scanf("%i",&opcion);
    if(opcion==6)return main();

    return 0;
}
//DEFINICIÓN
float funcion_suma(float *s1,float *s2){		//Operador de indirección * devuelve el valor contenido en la dirección de memoria
    float resultado;
    resultado=*s1+*s2;
    return resultado;
}

float funcion_resta(float *r1,float *r2){
    float resultado;
    resultado=*r1-*r2;
    return resultado;
}

float funcion_multiplicar(float *m1,float *m2){
    float resultado;
    resultado=*m1* *m2;
    return resultado;
}

float funcion_dividir(float *d1,float *d2){
    float resultado;
    resultado=*d1/ *d2;
    return resultado;
}
