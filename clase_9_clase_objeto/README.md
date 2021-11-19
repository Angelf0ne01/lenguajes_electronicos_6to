## Programación Orientada a Objetos 

El paradigma de programación orientada a objetos es una metodología especial de programación de software en la que un programa informático se diseña como la interrelación entre un conjunto de instancias conocidas como objetos. Dichos objetos son entidades que tienen un estado que está descrito por sus variables internas que se conocen como atributos o propiedades; y que tienen comportamientos que están plasmados en funciones o métodos que se utilizan para manipular las variables que describen el estado del objeto.

La programación orientada a objetos al igual que la programación estructurada sigue el método de programación imperativa, es decir, el programador escribe los métodos de forma que se a través de un algoritmo se dicta la funcionalidad de los métodos.


Los objetos que tienen estado y comportamiento idénticos se agrupan o clasifican en "clases".


### Clase 

Una clase es en general un modelo, receta o plantilla que define el estado y comportamiento de cierto tipo de objetos. Una clase puede pensarse como una colección de variables (atributos o propiedades) y funciones (métodos) que permiten representar un conjunto de datos y especificar las operaciones o procedimientos que permiten manipular tales datos. 

### Objeto
Un objeto es una instancia de una clase, es decir una entidad que se construye a partir de las descripciones consignadas en una clase (datos y funciones). Por tanto, un objeto se puede entender como una "variable" que se declara del tipo de dato de cierta clase. Un objeto es como tal la entidad tangible que permite acceder a los datos y funciones modeladas al interior de la clase

##### Ejemplo:
Una analogía para entender las clases y los objetos puede ser una fabrica ensambladora de autos. Hay un modelo o diseño (clase) especifico de un vehiculo, pero este modelo en si no es un auto, es solo una descripción de que características y funcionalidades deben tener los vehiculo que sean de ese modelo. Los autos ensamblados en la fabrica de acuerdo a dicho modelo serían los objetos, es decir entidades tangibles que se construyeron a partir de las descripciones y especificaciones consignadas en el diseño o modelo (o sea la clase).

Clase:
[![disenio_img](https://www.codingame.com/servlet/fileservlet?id=41130462062760 "disenio_img")](https://www.codingame.com/servlet/fileservlet?id=41130462062760 "disenio_img")


Objeto:
[![objeto](https://www.codingame.com/servlet/fileservlet?id=41130486739472 "objeto")](https://www.codingame.com/servlet/fileservlet?id=41130486739472 "objeto")

Para declarar una clase en C++ se utiliza la palabra reservada class, se da un nombre a la clase y luego entre llaves se declaran los miembros de la clase.

```cpp
class MiClase
{
  //Aquí van los miembros de la clase: Variables y funciones
  
}; //NO olvidar el ;
```

Los objetos, tal como se había mencionado con anterioridad, son variables (instancias) del tipo de dato definido por una clase. Por tanto, los objetos se pueden declarar al interior o por fuera de funciones, tal y como una variable local o global respectivamente.
 Pueden ser declarados como miembros de otras clases, es decir al interior de otras clases.

 Para declarar un objeto primero se utiliza el mobre de la clase a la que pertenece el objeto seguido de un nombre para el objeto.

```cpp
MiClase objetoGlobal;  //Declaración de un objeto global de la clase MiClase

int main()
{
	MiClase objetoLocal; //Declaración de un objeto local de la clase MiClase  
}
```




