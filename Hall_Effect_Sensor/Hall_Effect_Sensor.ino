//Using a Analog hall switch with LEDs
//Designed by JIN-WOO KIM

const int sensorPin = A0; //select the input pin for the potentiometer
int digitalPin = 8; //D0 attach to pin8
int sensorValue = 0; //variable to store the value coming from A0
boolean digitalValue = 0; //variable to store the value coming from pin
const int ledPin1 = 13; //the number of the led (red)
const int ledPin2 = 12; //the number of the led (yellow)
const int ledPin3 = 11; //the number of the led (green)
void setup() {
  pinMode(digitalPin, INPUT); // Set the state of D0 as INPUT
  pinMode(ledPin1, OUTPUT); // LED as an output
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600); }
void loop() {
  sensorValue = analogRead(sensorPin);     // read the value of A0
  digitalValue = digitalRead(digitalPin); // read the value of D0
  Serial.print("Sensor Value ");         // print label to serial monitor
  Serial.println(sensorValue);           // print the value of A0
  Serial.print("Digital Value ");        // print label to serial monitor
  Serial.println(digitalValue);          // print the value of D0 in the serial
  delay(1000); //delay 1000ms
  if (sensorValue >= 800) //if value is greater than 500  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(1000); //delay 1000ms
  }
  else if (sensorValue >= 600) //if value is greater than 400  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    delay(1000); //delay 1000ms
  }
  else if (sensorValue >= 500) //if value is greater than 170 {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(1000); // delay 1000ms
  }}
