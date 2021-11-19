#include <Servo.h>

class SensorMovimiento
{
private:
    int pin;

public:
    SensorMovimiento() {}
    SensorMovimiento(int p)
    {
        pin = p;
        pinMode(pin, INPUT);
    }

    bool hayMovimiento()
    {
        return digitalRead(pin);
    }
};

class ServoMotor
{
private:
    int pin;
    Servo camServo;

public:
    ServoMotor() {}
    ServoMotor(int p)
    {
        pin = p;
        camServo.attach(pin);
    }

    void girar(int grados)
    {
        camServo.write(grados);
    }
};

class PinGrados
{
private:
    int pin;
    int grados;

public:
    PinGrados() {}
    PinGrados(int p, int g)
    {
        pin = p;
        grados = g;
    }

    int getPin()
    {
        return pin;
    }

    int getGrados()
    {
        return grados;
    }

    void setGrados(int g)
    {
        grados = g;
    }
    void setPin(int p)
    {
        pin = p;
    }
};

PinGrados pinesGrados[4] = {
    PinGrados(2, 45),
    PinGrados(3, 90),
    PinGrados(4, 135),
    PinGrados(5, 180)};


const int sensor_pines_length = sizeof(pinesGrados) / sizeof(PinGrados);
SensorMovimiento sensores[sensor_pines_length];
ServoMotor servoMotor;

void setup()
{
    Serial.begin(9600);
    for (int x = 0; x < sensor_pines_length; x++)
    {
        sensores[x] = SensorMovimiento(pinesGrados[x].getPin());
    }

    servoMotor=ServoMotor(6);
    servoMotor.girar(20);
}

void loop()
{
    for (int x = 0; x < sensor_pines_length; x++)
    {
        bool currentSensor = sensores[x].hayMovimiento();
        int currentGrados=pinesGrados[x].getGrados();
        Serial.print(currentSensor);
        Serial.print("-");
        if (currentSensor)
        {
          Serial.print("-");
          Serial.print(currentGrados);
          Serial.print("º");
            servoMotor.girar(currentGrados);
            break;
        }
    }
    Serial.println("");
}