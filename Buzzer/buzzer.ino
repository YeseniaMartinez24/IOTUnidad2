int buzzer =2;

void setup() {
  //Define pin mode of pin 2
  pinMode(buzzer, OUTPUT);
}

void loop() {
    tone(buzzer, 5000);
    //Duration of tone 1 second
    delay(1000);
    // Stop sound
    noTone(buzzer);
    //Duration silence 1 second 
    delay(1000); 
  }