## Constructores de la clase

Un constructor es un método que se ejecuta de manera automática al instanciar un objeto de una clase. El constructor tiene como finalidad la incialización de las variables de la clase y posiblemente ejecutar algunos de los métodos de la clase. Una clase puede tener tantos constructores (sobrecargas) como el desarrollador lo estipule. La característica más sobresaliente de los constructores es que su nombre es el mismo que el de la clase, es decir, son métodos de la clase que se nombran igual que la clase, y que además no tienen valor de retorno. Las distintas sobrecargas del constructor de una clase van a depender de las distintas combinaciones de parámetros de entrada de la función. Cuando no se declara un constructor de manera explícita para una clase entonces C++ se encarga de asignar un constructor implícito por defecto a la clase. En esta sección se hará énfasis en 2 tipos de constructores: constructor por defecto y constructor parametrizado.



```cppp
	class Motor{
		public:
		Motor(/*parametros opcionales*/){
		
		}
	};
```

#### Constructor por defecto

Constructor por defecto: Es un constructor que no tiene parámetros de entrada, la inicialización de las variables se hace con valores por defecto que el programador codifica en el bloque de código del constructor.

```cpp

class FooClass
{
	int x=1, y=2, z=3;
	public:
	FooClass(); //Constructor por defecto
	void printVars(){
		printf(x);
		printf(y);
		printf(z);
	}
};

void setup(){
	FooClass obj; //Inicializacion por defecto
	FooClass obj2=FooClass(); //Inicializacion por defecto
	obj.printVars();
	obj2.printVars();
	
}
```

#### Constructor parametrizado:
Constructor parametrizado: Es un constructor que tiene parámetros de entrada que se utilizan luego en la inicialización de las variables de clase.


```cpp

class FooClass
{
	int x, y, z;
	public:
	//Constructor parametrizado
	FooClass(int v1,int v2, int v3){
		x=v1;
		y=v2;
		z=v3;
	}
	void printVars(){
		printf(x);
		printf(y);
		printf(z);
	}
};

void setup(){
	FooClass obj(1,2,3); //Inicializacion por defecto
	FooClass obj2=FooClass(1,2,3); //Inicializacion por defecto
	obj.printVars();
	obj2.printVars();
	
}
```
