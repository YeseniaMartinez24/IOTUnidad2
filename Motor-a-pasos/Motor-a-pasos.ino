#include <Stepper.h>

// Define step constants
#define FULLSTEP 14
#define SENSOR_PIN 34

int val; // Defines a numeric variable                // create servo object to control a servo

// variables will change:
int angle = 0; // the current angle of servo motor
const int stepsPerRevolution = 2038;
Stepper myStepper = Stepper(stepsPerRevolution, 14, 27, 26, 25);


void setup() {
  Serial.begin(9600);         // initialize serial
  pinMode(SENSOR_PIN,INPUT_PULLUP);
}

void loop() {
  // Rotate CW slowly at 5 RPM
 // check mercury switch state
  if(digitalRead(SENSOR_PIN) == HIGH)
  {
    myStepper.setSpeed(10);
    myStepper.step(-stepsPerRevolution);
    delay(1000);
  }
}