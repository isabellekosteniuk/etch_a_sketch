 
  int analogPin0 = A0;
  int analogPin1 = A1;
  int x_sensorValue = 0;
  int y_sensorValue = 0;
 

  
void setup() {
  Serial.begin(9600);
  pinMode(analogPin0, INPUT);
  pinMode(analogPin1, INPUT);
  delay(1000); // included to allow serial comm setup
 

}

void loop() {

  x_sensorValue = analogRead(analogPin0);
  y_sensorValue = analogRead(analogPin1);
  Serial.print(x_sensorValue);
  Serial.print(",");
  Serial.print(y_sensorValue);
  Serial.print(",|");
  
  delay(50);

}
