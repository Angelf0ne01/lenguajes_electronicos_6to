## Encapsulamiento

Acceso público (public) y acceso privado (private)

De momento se va a hacer enfasis en los niveles de acceso público y privado. El nivel de acceso público se expresa en la declaración de la clase con la palabra reservada `public` y permite que un miembro de clase sea accedido directamente a través del operador punto, usualmente los métodos de una clase tienen este nivel acceso.
Por otro lado, el nivel de acceso privado permite la ocultación de ciertos miembros de la clase y restringe el acceso a dichos miembros a solo otros miembros de la misma clase, es decir solo puede accederse a un miembro privado de una clase mediante un miembro público que acceda directamente a ese miembro. En este caso, al hacer un llamado directo del miembro privado con el operador punto resultará en un error de compilación de la aplicación. EL nivel de acceso privado es el nivel de acceso por defecto de los miembros de una clase y se expresa con el uso de la palabra reservada `private`.

```cpp
class MyClass{
	int var1; //acceso privado por defecto
	bool var2; //acceso privado por defecto
	float var3=3.14; //acceso privado por defecto

	public: //De aquí en adelante los miembros son públicos a no ser que se exprese lo contrario
	float calcularArea(float x, float y){
		return  x*y*var3;
	}

	void cambiarVar1(int a){
		var1=a;
	}
};


void setup(){
    MyClass obj;
    obj.cambiarVar1(100); //OK
    obj.var1 = 200; //ERROR!
}
```
