int sensorPin = A0; // lee la señal del pin analógico A0
float angle = 0; // crea una variable para el ángulo medido

void setup() {
  Serial.begin(9600); // inicia la comunicación serial a 9600 bps
}

void loop() {
  int sensorValue = analogRead(sensorPin); // lee el valor del sensor
  angle = map(sensorValue, 0, 1023, -90, 90); // mapea el valor del sensor a un ángulo en grados
  Serial.print("Ángulo: "); // imprime "Ángulo: " en la consola serial
  Serial.println(angle); // imprime el ángulo medido en la consola serial
  delay(1000); // espera un segundo antes de tomar otra medición
}