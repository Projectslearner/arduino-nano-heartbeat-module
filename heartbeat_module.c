/*
    Project name : Heartbeat module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-heartbeat-module
*/

const int heartSensorPin = A0; // Analog pin connected to the heart rate sensor
int bpm = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  // Read the value from the heart rate sensor
  int sensorValue = analogRead(heartSensorPin);

  // Calculate BPM based on sensor value
  bpm = map(sensorValue, 0, 1023, 30, 200); // Map sensor value to BPM range

  // Print BPM to serial monitor
  Serial.print("BPM: ");
  Serial.println(bpm);

  delay(1000); // Delay for stability
}
