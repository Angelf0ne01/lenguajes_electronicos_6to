/*
    Crear un programa que me muestre si una persona es mayor de edad o no.
*/

//declaracion de variables globales.
int mayoria_de_edad = 18;  //Mayoria de edad
int edad_persona_1 = 17; //edad de persona 1
int edad_persona_2 = 19; //edad de persona 2
int edad_persona_3 = 18; //edad de persona 2
bool es_mayor = false; //variable auxiliar para saber si es mayor.


void setup(){
    Serial.begin(9600);
}

void loop(){
    
    //17 >= 18 como la persona 1 no es mayor de edad el resultado de esa operacion es falso.
    //por lo tanto es mayor se le asigna el valor boleano, false.
    es_mayor = edad_persona_1 >= mayoria_de_edad;

    //como el valor de mayor es false, no se ejecuta
    if(es_mayor){ 
        Serial.println("La persona 1 es mayor a 17 años.");
    }else {
        Serial.println("La persona 1 es menor a 18 años");
    }

    
    //19 >= 18 como la persona 2 no es mayor de edad el resultado de esa operacion es true.
    //por lo tanto es mayor se le asigna el valor boleano, true.
    es_mayor = edad_persona_2 >= mayoria_de_edad;

    //como el valor de mayor es true, no se ejecuta
    if(es_mayor){ 
        Serial.println("La persona 2 es mayor a 17 años.");
    }else {
        Serial.println("La persona 2 es menor a 18 años");
    }

    //otra forma de consultar si es mayor.
    if(edad_persona_3 >= mayoria_de_edad){  //es verdadero
        Serial.println("La persona 2 es mayor a 17 años.");
    }else {
        Serial.println("La persona 2 es menor a 18 años");
    }
}