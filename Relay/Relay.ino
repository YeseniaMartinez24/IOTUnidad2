const int relay = 13

void setup (){

 pinMode(relay,OUTPUT);

}

void loop(){

 digitalWrite(relay, HIGT);
 delay(1000);
 digitalWrite(relay, HOW);
 delay(1000);
}
