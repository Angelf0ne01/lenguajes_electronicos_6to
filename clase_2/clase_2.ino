
//variables globales.
char letra_a = 'a';
String palabra = "";

void setup(){
    Serial.begin(9600);
}

void loop(){

    //la letra en 'a' en ASCII tiene un valor de 65.
    if(letra_a == 65){  //la condicion es verdadera
        Serial.println("A es igual a 65");
    }


/*********************** FOR EJEMPLO 1*********************************/

    //ejemplo de ciclo for: contador de 0 a 10 de 1 en 1;
    //for (inicializacion ; condicion ; incremento o decremento ){}
    for(int x=0;x<10;x++){
        Serial.println(x);
    }
    //output: 0,1,2,2,3,4,5,6,7,8,9,10

    /*********************** FOR EJEMPLO 2*********************************/

    //ejemplo de ciclo for: contador de 0 a 10 de 1 en 1;
    //for (inicializacion ; condicion ; incremento o decremento ){}
    for(int x=10;x>=0;x++){
        Serial.println(x);
    }
    //output: 10,9,8,7,6,5,4,3,2,1,0

    /*********************** FOR EJEMPLO 3*********************************/

    //ejemplo de ciclo for, char y string: crear un string que contenga el abecedario.
    //output deseado: abcdefghijklmnopqrstuvwxyz    
    //for (inicializacion ; condicion ; incremento o decremento ){}
    //se sabe que el abecedario tiene 27 letras y que la letra a miniscula en ascii a es el 65.            
    for(int ascii=65;ascii<=(65+27);ascii++){        
        char letra = ascii; //convierto el numero a un caracter.
        palabra += letra;
    }
    Serial.println(palabra);
    //output: abcdefghijklmnopqrstuvwxyz

}