## Variables y Metodos

#### Variables 
Las variables de clase son datos de distinto tipo que sirven para describir el estado actual de un objeto de esa clase. 
Se declaran al interior de una clase de la misma forma en que se declaran variables en una aplicación convencional. Es decir, tipo de dato (calificadores opcionales), nombre para la variable y un valor inicial opcional.
Ejemplo:
`int val=0;`

Ejemplo:
```cpp
class MyClass{
	int var1; //variable de clase
	bool var2; //variable de clase
	float var3=3.14; //variable de clase
};
```


#### Metodos
Los métodos de una clase son funciones que sirven para manipular las variables de la clase, de ahí viene la primera característica relevante de la programación orientada a objetos que es el encapsulamiento, ya que en lo posible se va a tratar de que solo pueda accederse a una variable de clase a través de un método de la clase. Los métodos se declaran y definen de la misma manera que una función cualquiera en una aplicación convencional, dicho de otro modo, en su firma expresan el tipo del valor de retorno, un nombre para el método y  parámetros de entrada.

Ejemplo:
```cpp
class MyClass{
	//variables
	int var1; //variable de clase
	bool var2; //variable de clase
	float var3=3.14; //variable de clase
	//methodos
	//Declaración de un método de la clase
	float calcularArea(float x, float y){
		return  x*y*var3;
	}
	
	void cambiarVar1(int a){
		var1=a;
	}
};
```

### Acceso a miemboros de la clase.
El acceso a los miembros(variables o metodos) de una clase solo puede lograrse a través de una instancia de esa clase, es decir, de un objeto de dicha clase. De modo que para acceder a un miembro en específico de una clase se llama al objeto recién declarado y con ayuda del operador punto `.` se hace el llamado a la variable o método al cual se requiere acceder.

```cpp
void setup(){
	//Declaro un objeto de la clase.
	myClass miObjeto;
	//accedo a un miembro con el operador punto
	miObjeto.cambiarVar1(2);
	//accedo a un miembro con el operador punto
	float area=miObjeto.calcularArea(5,2);
}

```