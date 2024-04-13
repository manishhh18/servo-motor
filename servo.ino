
#include <Servo.h>

Servo servo;

int joyX = A0;
int joyY = A1;

int pos=0;

int joyinput;
  
void setup() 
{
  Serial.begin(9600);
  servo.attach(7);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}
  
void loop()
{

  joyinput = analogRead(joyX);
  joyinput = map(joyinput, 0, 1023, 0, 180);
  pos = joyinput;
  servo.write(pos);
  
  int x_data = analogRead(joyX);
  int y_data = analogRead(joyY);

  Serial.print("position data");
  Serial.println(pos);
  Serial.print("x_data");
  Serial.println(x_data);
  
  Serial.print("y_data");
  Serial.print(y_data);
}