#  Clase Nº 2
## Temas: 
### Variables:
- char
- string 

### Estructura de control:
- for


------------



#### Variable del tipo char 
Las varaibles del tipo char solo puede almacenar 1 byte de informacion (8 bits). 
Este tipo de datos se emplea para representar un carácter perteneciente a un determinado código utilizado por el ordenador (normalmente el código ASCII).

Para representar este tipo de dato se antepone la palabra reservada char al identificador de la variable.

los caracteres se almacenan como números. Puede ver la codificación específica en el gráfico ASCII . Esto significa que es posible realizar operaciones aritméticas con caracteres, en los que se utiliza el valor ASCII del carácter (por ejemplo, 'A' + 1 tiene el valor 66, ya que el valor ASCII de la letra A mayúscula es 65).

###### Grafico ascii:

[![grafico ascii](https://835983.smushcdn.com/2126993/wp-content/uploads/2018/07/codigo-ascii.jpg?lossy=1&strip=1&webp=1 "grafico ascii")](https://835983.smushcdn.com/2126993/wp-content/uploads/2018/07/codigo-ascii.jpg?lossy=1&strip=1&webp=1 "grafico ascii")

###### sintaxis:
```c
 char nombre_de_variable = 'A';
 char nombre_de_variable = 65; // ambos son equivalentes

```

------------


#### Variable del tipo char 
Las variables string son secuencia de caracteres guardados como una mtriz de caracteres terminados con un caracter nulo ('\' ASCII 0).
Las cadenas se especifican entre "comillas dobles".

###### sintaxis:

```c
String nombre_de_variable = "";
String nombre_de_variable = "palabra";
```

------------
#### Estructuras de control: For
La instrucción for se usa para repetir un bloque de declaraciones entre llaves. Por lo general, se usa un contador de incrementos para incrementar/decrementar y terminar el ciclo. La instrucción for es útil para cualquier tipo de operación repetitiva. 


[![Ciclo for](https://upload.wikimedia.org/wikipedia/commons/thumb/0/06/For-loop-diagram.png/220px-For-loop-diagram.png "Ciclo for")](https://upload.wikimedia.org/wikipedia/commons/thumb/0/06/For-loop-diagram.png/220px-For-loop-diagram.png "Ciclo for")

###### Sintaxis:

```c
for( expresion1 ; expresion2 ; expresion3){
		//bloque de codigo.
}
```
La **expresion1** es  una asignacion de una o mas variables.  La asignacion ocurre primero y solo se ejecuta una vez. 

Cada vez que pasa por el bucle, se evalua la  **expresion2** . Mientras la expresion2 tenga un valor de Verdadero (true o 1), permite la iteracion en la ejecucion del bloque de codigo. 

por ultimo se ejecuta la **exprecion3**, el cual es una asiganacion, que comunmente varia alguna de las variables contenidas en la expresion2.

Todas las expresiones contenidas en el parentesis del FOR deben estar separadas por PUNTO  y COMA.


[![Sintaxis for](https://www.arduino.cc/en/uploads/Reference/ForLoopIllustrated.png "Sintaxis for")](https://www.arduino.cc/en/uploads/Reference/ForLoopIllustrated.png "Sintaxis for")


