/*
  Final Project
  Imra Ali
  DIGF-3010-001 Advanced Wearable Electronics
  OCAD University
  Created on 2022-04-12
  Project Title: The Smiley Tote
*/


#include <Adafruit_CircuitPlayground.h>
int Blue1 = 2; // input pin for the 1st blue led
int Green1 = 0; // input pin for the 1st green led
int Yellow = 12; // input pin for the yellow led
int Orange = 6; // input pin for the orange led
int Red = 9; // input pin for the red led
int Blue2 = 10; // input pin for the 2nd blue led
int Green2 = 1; // input pin for the 2nd green led

int analogPin = 4;    // input pin for the pressure sensor
int analogValue;  // int to store the variable coming from the sensor

void setup() {
  Serial.begin(9600); 

  // setting the pins to configure/behave as outputs
  pinMode(Blue1, OUTPUT);
  pinMode(Green1, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Orange, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Blue2, OUTPUT);
}

void loop() {
  // collect the values coming from the pressure sensor and print them into the serial monitor
  analogValue = analogRead(analogPin);
  Serial.println(analogValue);

  // setting the value for when blue 1 should turn on...
  if (analogValue > 400) {
    digitalWrite(Blue1, HIGH);
  }
  else digitalWrite(Blue1, LOW);


  // setting the value for when green 1 should turn on...
  if (analogValue > 500) {
    digitalWrite(Green1, HIGH);
  }
  else digitalWrite(Green1, LOW);


  // setting the value for when yellow should turn on...
  if (analogValue > 600) {
    digitalWrite(Yellow, HIGH);
  }
  else digitalWrite(Yellow, LOW);


  // setting the value for when orange should turn on...
  if (analogValue > 700) {
    digitalWrite(Orange, HIGH);
  }
  else digitalWrite(Orange, LOW);


  // setting the value for when red should turn on...
  if (analogValue > 800) {
    digitalWrite(Red, HIGH);
  }
  else digitalWrite(Red, LOW);


  // setting the value for when blue 2 should turn on...
  if (analogValue > 800) {
    digitalWrite(Blue2, HIGH);
  }
  else digitalWrite(Blue2, LOW);
  

  // setting the value for when green 2 should turn on...
  if (analogValue > 800) {
    digitalWrite(Green2, HIGH);
  }
  else digitalWrite(Green2, LOW);
}
