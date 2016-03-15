//This code using the following equipment
// IR Range Sensor, LED Light, Resistor (100ohms), Redboard (Arduino Uno), Breadboard
//This code was developed to use the range sensor to turn on/off an LED based on 
//the proximity to an item
//
//Sushunova G. Martinez
//March 15, 2006
//Connect the LED to a digital pin (#7)and connect the IR sensor to a digital pin

int IRPin = 0;   // pushbutton connected to digital pin 7
int ledPin = 7; // LED connected to digital pin 13
int val = 0;     // variable to store the read value

void setup()
{
  Serial.begin(9600); //initializing Serial Monitor
  pinMode(ledPin, OUTPUT);      // sets the digital pin for LED as output

}

void loop()
{

  val = analogRead(IRPin);// read the input pin
    Serial.println(val);
    delay(100);
  if (val <30){
  digitalWrite(ledPin, LOW);    // sets the LED to the button's value
 // Serial.println("The LED is OFF.");
  }
  else{
    digitalWrite(ledPin, HIGH);
   // Serial.println("The LED is ON.");
  }
}