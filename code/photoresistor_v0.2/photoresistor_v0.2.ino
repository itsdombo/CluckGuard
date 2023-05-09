/*  Author: Dominic Rousseau
 *  Date: May 8th, 2023
 *
 *  Turns a servo 360 degrees clockwise when it is dark enough, and 360 degrees counter-clockwise when it is bright enough.
 *
 *  Photoresistor w/ LED circuit and code from: Michalis Vasilakis | Date: 8/6/2015 | www.ardumotive.com
*/ 

// Libraries
#include <Servo.h>

// Create a servo object called servo
Servo myServo;

// Changeable parameters
#define OPENPOS 0                 // The open position the servo goes to
#define CLOSEPOS 500              // The close position the servo goes to
#define READ_DELAY 500            // Delay between readings
#define BRIGHTNESS_THRESHOLD 100  // Threshold of light photoresistor gets before turning off
                                  // Higher means brighter

// Constants
const int pResistor = A0; // Photoresistor communicates through analog pin A0
const int led = 7;        // Led pin is controlled through pin 7

// Variables
int value;				  // Brightness value from photoresistor with range 0-1023

void setup(){
 pinMode(led, OUTPUT);  // Sets led to be of type output
 pinMode(pResistor, INPUT); // Sets photo resistor to be of type input
 myServo.attach(6); // Attaches servo to pin 6
 Serial.begin(9600);  // Serial Read
}

void loop(){
  value = analogRead(pResistor);  // Reads the value of the photoresistor
  
  Serial.println(value); // Prints the value of the photo resistor (0-1023) to the console

  if (value > BRIGHTNESS_THRESHOLD){
    digitalWrite(led, LOW);           // Turn led off
    myServo.write(OPENPOS);             // Turn servo to open position
    Serial.println("Door is open.");  // Print sentence to console
  }
  else{
    digitalWrite(led, HIGH);            // Turn led on
    myServo.write(CLOSEPOS);              // Turn servo to close position
    Serial.println("Door is closed.");  // Print sentence to console
  }

  delay(READ_DELAY); // Delay between each read
}