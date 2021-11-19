#include <Servo.h>

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

class AnalogButton {
  private:
    int pin_btn;
    int pin_a_y;
    int pin_a_x;
  public:
    AnalogButton(int p_btn, int p_a_y, int p_a_x) {
      pin_btn = p_btn;
      pin_a_y = p_a_y;
      pin_a_x = p_a_x;
      pinMode(pin_btn, INPUT_PULLUP);
      pinMode(pin_a_y, INPUT);
      pinMode(pin_a_x, INPUT);
    }

    bool btnIsPress() {
      return !digitalRead(pin_btn);
    }

    bool isDown() {
      return analogRead(pin_a_y) <= 1;
    }

    bool isUp() {
      bool val = analogRead(pin_a_y) >= 1023;
      return val;
    }


    bool isRight() {      
      return analogRead(pin_a_x) <= 1;
    }

    bool isLeft() {
      bool val = analogRead(pin_a_x) >= 1023;
      return val;
    }




};

#define JOYSTICK_BTN A2
#define JOYSTICK_VER A0
#define JOYSTICK_HOR A1
AnalogButton joystick = AnalogButton(
                          JOYSTICK_BTN,
                          JOYSTICK_VER,
                          JOYSTICK_HOR
                        );
ServoMotor sv;
ServoMotor sv_h;

bool upIsPress = false;
bool downIsPress = false;

bool leftIsPress = false;
bool righIsPress = false;


int vertVal = 0;
int vertHor = 0;

void setup() {
  Serial.begin(9600);
  sv = ServoMotor(3);
  sv_h = ServoMotor(5);
  sv.girar(vertVal);
  sv_h.girar(vertHor);
}

void loop() {

  Serial.print(joystick.isRight());
  Serial.print("-");
  Serial.println(!righIsPress);
  if (joystick.isUp() && !upIsPress ) {
    vertVal += 20;
    if (vertVal >= 180)vertVal = 180;
    sv.girar(vertVal);
  }

  if (joystick.isDown() && !downIsPress ) {
    vertVal -= 20;
    if (vertVal <= 0)vertVal = 0;
    sv.girar(vertVal);
  }

  if (joystick.isLeft() && !leftIsPress ) {
    vertHor -= 20;
    if (vertHor <= 0)vertHor = 0;
    sv_h.girar(vertHor);
  }

    if (joystick.isRight() && !righIsPress ) {
      Serial.print("INGRESOOOO");
    vertHor += 20;
    if (vertHor >= 180)vertHor = 180;
    sv_h.girar(vertHor);
  }

  upIsPress = joystick.isUp();
  downIsPress = joystick.isDown();
  leftIsPress = joystick.isLeft();
  righIsPress = joystick.isRight();





}
