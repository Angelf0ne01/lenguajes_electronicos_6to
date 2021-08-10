/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*
 |-6 |   |   |   |   |
 |   |   |   |   |   |
 |   |   |   |   |   |
 |   |   |   |   |   |
 | X |   |   |   |   |
 | 0 |   |   |   |   |

*/

int punto[2]=[0,0]; //x=0 e y=0
int pantalla[6][6]; //array de 6x6
#define EJE_X 0
#define EJE_Y 1


#include <stdio.h>

int main()
{
    if(up){
        puntos[EJE_Y]++;
        if(puntos[EJE_Y]>=7){
            puntos[EJE_Y]=0
        }
    }
    if(down){
        puntos[EJE_Y]--;
    }
    if(right){
        puntos[EJE_X]++;
    }

    if(left){
        puntos[EJE_X]--;
    }
    
    for(int fila=0;fila<6;fila++){
        for(int columna=0;columna<6;columna++){
            if(fila == puntos[EJE_Y] && columna == puntos[EJE_X]){
                pantalla[fila][columna]='*'
            }else{
                pantalla[fila][columna]=' '
            }
            
        }
    }
    return 0;
}
