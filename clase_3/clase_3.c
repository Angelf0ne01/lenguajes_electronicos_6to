

#include <stdio.h>

char abecedario[6]={'a','b','c','d','e','f'};
int numeros[2][5]={
                  {1,2,3,4,5},
                  {6,7,8,9,10}
                 };


int main()
{
    //int fila=1;
    //int columna=3;
    for(int fila=0;fila<2;fila++){
        for(int columna=0;columna<5;columna++){
       printf("fila %d - columna %d valor %d \n\r",fila,columna,numeros[fila][columna]);
        }
    }
    //
    for(int index=0;index<6;index++){
      printf("letra del abecedario: %c \n\r",abecedario[index]);
       if(index>3){
            break;
        }
    }
    
    
    //Ejercicio 1
    //Crear una logica que me permita visualizar la tabla de multiplicar.
    //Se debe visualizar la tabla del 1, hasta el 10 con sus respectivos valores.

    //OUTPUT--> 4 x 2 = 8

    /*
    int tabla=1;
    while(tabla<=10){
        int multiplo=1;
        while(multiplo<=10){
            int resultado=multiplo*tabla;
            printf("%d x %d = %d\n",tabla,multiplo, resultado);
            multiplo++;
        }
        tabla++;
        
    }*/
    
    /*
    int tabla=1;
    while(tabla<=10){
        for(int multiplo=1;multiplo<=10;multiplo++){
            int resultado=multiplo*tabla;
            printf("%d x %d = %d\n",tabla,multiplo, resultado);
        }
        tabla++;
    }*/
    
    int tabla[3][11]={
              {0,0,0,0,0,0,0,0,0,0,0},
              {0,1,2,3,4,5,6,7,8,9,10},
              {0,2,4,6,8,10,12,14,16,18,20}
            };
            

     for(int fila=0;fila<3;fila++){
        for(int columna=0;columna<11;columna++){
             
            printf("%d x %d = %d\n",fila,columna, tabla[fila][columna]);
        }
     }
     
    /* int tabla[10]={1,2,3,4,5,6,7,8,9,10};
     
     for(int fila=0;fila<10;fila++){
        for(int columna=0;columna<10;columna++){
            
             int resultado=tabla[fila]*tabla[columna];
             
            printf("%d x %d = %d\n",fila+1,columna+1, resultado);
        }
     }
     */
     
      for(int fila=1;fila<=10;fila++){
        for(int columna=1;columna<=10;columna++){
             int resultado=fila*columna;
            printf("%d x %d = %d\n",fila,columna, resultado);
        }
     }
     
    int contador_do_while=10;    
    do{
        printf("contador_do_while: %d \n",contador_do_while);
        contador_do_while++;
        
    }while(contador_do_while<10);

    return 0;
}
