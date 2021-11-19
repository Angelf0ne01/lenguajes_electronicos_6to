/*
  Realizar un programa que me permita controlar el estado de un led utilizando un botón.
  Caso de uso:
  El led debe estar encendido cuando el botón esté presionado y apagado cuando no lo esté.
*/

class Led
{
    //atributos
private:
    int pin;

    //metodo contructor
public:
    Led() {}
    Led(int p)
    {
        pin = p;
        pinMode(pin, OUTPUT);
    }

    //metodos publicos
    void encender()
    {
        digitalWrite(pin, HIGH);
    }

    void apagar()
    {
        digitalWrite(pin, LOW);
    }
};

class Button
{
private:
    int pin;

public:
    Button() {}
    Button(int p)
    {
        pin = p;
        pinMode(pin, INPUT);
    }

    bool estaPresionado()
    {
        //configurado en modo pull-up
        //si el pin esta en 0, esta presionado
        return !digitalRead(pin);
    }
};
/************ PROGRAMA PRINCIPAL ********************/
#define PIN_LED 13
#define PIN_BUTTON 12

Led led_1;
Button boton_1;

void setup()
{
    //Inicializo el led
    led_1 = Led(PIN_LED);
    //Inicializo el botón
    boton_1 = Button(PIN_BUTTON);
}

void loop()
{
    if (boton_1.estaPresionado())
    {
        led_1.encender();
    }
    else
    {
        led_1.apagar();
    }
}
