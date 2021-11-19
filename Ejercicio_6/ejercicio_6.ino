/*
Realizar un programa el cual me permita ver en un LED RGB el estado de la temperatura hambiente.

Si la temperatura es menor a 15º C, el LED azul se encenderá.
Si la temperatura se encutra entre 15º y 25º C, el LED verde se encenderá.
Si la temperatura es mayor a 25º C, el LED rojo se encenderá.

*/

class Led
{
    //atributos
private:
    int pin;

    //metodo contructor
public:    
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

class SensorTemperatura
{
private:
    int pin;

public:    
    SensorTemperatura(int p)
    {
        pin = p;
        pinMode(pin, INPUT);
    }

    int getCelsius()
    {
        
        return analogRead(pin);
    }
};
/************ PROGRAMA PRINCIPAL ********************/
#define PIN_LED_ROJO 13
#define PIN_LED_VERDE 12
#define PIN_LED_AZUL 13
#define PIN_SENSOR_TEMP A0

//Declaro e instancio los objetos, siempre arriba void setup
Led led_rojo=Led(PIN_LED_ROJO);
Led led_verde=Led(PIN_LED_VERDE);
Led led_azul=Led(PIN_LED_AZUL);
SensorTemperatura sensor_temp=SensorTemperatura(PIN_SENSOR_TEMP);


void setup()
{}

void loop()
{
    if(sensor_temp.getCelsius()<15)
    {
        //enciendo el led azul y apago el resto
        led_azul.encender();
        led_verde.apagar();
        led_rojo.apagar();
    }
    else if(sensor_temp.getCelsius()>=15 && sensor_temp.getCelsius()<=25)
    {
        //enciendo el led verde y apago el resto
        led_azul.apagar();
        led_verde.encender();
        led_rojo.apagar();
    }
    else if(sensor_temp.getCelsius()>25)
    {
        //enciendo el led rojo y apago el resto
        led_azul.apagar();
        led_verde.apagar();
        led_rojo.encender();
    }    
}
