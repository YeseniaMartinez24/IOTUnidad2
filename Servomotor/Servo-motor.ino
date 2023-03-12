#include "ESP32Servo.h"

#define SERVO_PIN  26 // ESP32 pin GIOP26 connected to servo motor's pin
#define SENSOR_PIN 21

Servo servo;                 // create servo object to control a servo

// variables will change:
int angle = 0; // the current angle of servo motor

void setup() {
  Serial.begin(9600);         // initialize serial
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
  servo.attach(SERVO_PIN);    // attaches the servo on pin 9 to the servo object
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  servo.write(angle);
}

void loop() {

  if(digitalRead(SENSOR_PIN) == LOW){
      if (angle == 0)
        angle = 90;
     else if (angle == 90)
        angle = 0;
        Serial.print("The button is pressed => rotate servo to ");
        Serial.print(angle);
        Serial.println("°");
        servo.write(angle);
  }else{
      if (angle == 0)
        angle = 90;
      else if (angle == 90)
       angle = 0;  
        Serial.print("The button is pressed => rotate servo to ");
        Serial.print(angle);
        Serial.println("°");
        servo.write(angle);
  }
}
