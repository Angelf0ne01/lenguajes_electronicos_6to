## Métodos Get y Set

Los métodos `Get` y `Set` son métodos que usualmente se definen para el acceso a una variable privada de la clase, para obtener su estado actual (valor) y para modificarlo respectivamente.

Un método `Get` es por lo general un método con una sola línea de código que retorna el valor actual de la variable privada. Tiene valor de retorno del mismo tipo de la variable en cuestión y en general no tiene parámetros de entrada.

Por otra parte, un método `Set` es un método en el cual por lo menos una de las líneas de código modifica directamente el valor de la variable privada. Es poco usual que tenga valor de retorno, pero sí debe tener por lo menos un parámetro de entrada para el valor con el que se modificará la variable.

```cpp
class OtraClase{
	bool privateVar; // Acceso privado por defecto
	
	public: //miembros publicos
	void setPrivateVar(bool newVal){
		privateVar=newVal;
	}
	
	bool getPrivateVar(){
		return privateVar;
	}
};

void setup(){
	OtraClase obj;
	obj.setPrivateVar(true)
	obj.getPrivateVar(); //true
	obj.setPrivateVar(false)
	obj.getPrivateVar(); //false
}

```