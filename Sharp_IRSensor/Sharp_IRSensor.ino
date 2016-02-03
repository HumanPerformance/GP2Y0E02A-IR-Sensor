/*
 * Sample code for the Sharp IR Range Sensor.
 * Known issues:
 *    1) Formula for distance seems to be accurate and consistent with actual
 *       measurments but returned value keeps fluctuating.
 *    2) Caveat with formula is that beyond a certain value for the voltage drop (9)
 *       the equation becomes invalid.
 *       
 * Notes: analogRead() returns a max 662 for 3.3V, equivalent to 4.98mV/unit.
*/

// Operation voltage is 3.3V
int sensor = A1; // analog pin used to connect to sensor
float distance = 0;
float vDrop;

void setup() {
  Serial.begin(9600);
}

void loop() {

  vDrop = analogRead(sensor);
  distance = (6762/ (vDrop-9) ) - 4;
  Serial.println(distance);
  delay(750);

}
