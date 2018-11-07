#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

/* Assign a unique ID to this sensor at the same time */
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
//button
const int buttonPin = 2;
int buttonState = 0;

String btn = "";String c = ",";
String x = "";String y = "";String z = "";
String out = "";

void setup(void) {
  Serial.begin(9600);  
  /* Initialise the sensor */
  if(!accel.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    Serial.println("Err");
    while(1);
  }

  //button
  pinMode(buttonPin, INPUT);

  /* Set the range to whatever is appropriate for your project */
  accel.setRange(ADXL345_RANGE_16_G);
  // accel.setRange(ADXL345_RANGE_8_G);
  // accel.setRange(ADXL345_RANGE_4_G);
  // accel.setRange(ADXL345_RANGE_2_G);
}

void loop(void) 
{
  /* Get a new sensor event */ 
  sensors_event_t event; 
  accel.getEvent(&event);

  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    btn = "HIGH";
  } else {
    btn = "LOW";
  }
 
  /* Display the results (acceleration is measured in m/s^2) */
  x = event.acceleration.x;
  y = event.acceleration.y;
  z = event.acceleration.z;

  out = btn+c+x+c+y+c+z;
  Serial.println(out);
  delay(10);
}
