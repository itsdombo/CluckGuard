/*  Author: Dominic Rousseau
 *  Date: May 8th, 2023
 *
 *  Turns a servo 360 degrees clockwise when it is dark enough, and 360 degrees counter-clockwise when it is bright enough.
 *  Roughly calibrated for a no-load, Wishiot TD-8125MG 25KG.
 *
 *  Photoresistor w/ LED circuit and code from: Michalis Vasilakis | Date: 8/6/2015 | www.ardumotive.com
*/ 

// Libraries
#include <Servo.h>

// Create a servo object called servo
Servo myServo;

// Changeable parameters
#define TRUE 1                    // Defines number 1 as true
#define FALSE 0                   // Defines number 0 as false
#define CW 30                     // Value that the servo turns clockwise
#define CCW 150                   // Value that the servo turns counterclockwise
#define OFF 90                    // The value that stops rotation
#define REVTIME 4000              // Time taken for servo to make 1 revolution
#define READ_DELAY 500            // Delay between readings
#define BRIGHTNESS_THRESHOLD 100   // Threshold of light photoresistor gets before turning off (higher means brighter)

// Constants
const int pResistor = A0; // Photoresistor communicates through analog pin A0
const int led = 7;        // Led pin is controlled through pin 7

// Variables
int value;				  // Brightness value from photoresistor with range 0-1023
int isOpen = 0;     // Open state of door

void setup(){
 pinMode(led, OUTPUT);  // Sets led to be of type output
 pinMode(pResistor, INPUT); // Sets photo resistor to be of type input
 myServo.attach(6); // Attaches servo to pin 6
 Serial.begin(9600);  // Serial Read
}

void loop(){
  value = analogRead(pResistor);  // Reads the value of the photoresistor
  
  Serial.println(value); // Prints the value of the photo resistor (0-1023) to the console

  if (value >= BRIGHTNESS_THRESHOLD && isOpen == 0){      // If it's bright enough and door is closed
    open();
  }
  else if (value < BRIGHTNESS_THRESHOLD && isOpen == 1) { // If it's dark enough and door is open
    close();
  }
  else {
    // Nothing
  }

  delay(READ_DELAY); // Delay between each read
}

void close() {
  Serial.println("Door is closing...");  // Print sentence to console
  digitalWrite(led, HIGH);            // Turn led on
  myServo.write(CCW);
  delay(REVTIME);
  myServo.write(OFF);
  isOpen = 0;
}

void open() {
  Serial.println("Door is opening...");  // Print sentence to console
  digitalWrite(led, LOW);           // Turn led off
  myServo.write(CW);
  delay(REVTIME);
  myServo.write(OFF);
  isOpen = 1;
}
