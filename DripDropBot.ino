int ledPin = 13;
int sensorPin = A0; // Analog pin for sensor
int sensorValue = 0; // Variable to store the sensor reading
int threshold = 500;

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue < threshold){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}