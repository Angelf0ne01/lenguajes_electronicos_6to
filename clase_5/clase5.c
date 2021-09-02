//Funciones

<tipo_de_datos> nombre_funcion( parametros_opcional);
//int enteros
//char caracteres
//string cadena de caracteres
//float decimales
//bool verdero o falso.



int getSensorTemperature(int PIN_ARDUINO){
    //logica de negocio
    int temperatura=analogRead(PIN_ARDUINO);
    return temperatura;
}
String name="";

void setName(string name){
    name=name;
}

String getName(){
    return name;
}


int temperature=getSensorTemperature(3);





