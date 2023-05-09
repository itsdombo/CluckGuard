/*  Author: Dominic Rousseau
 *  Date: May 5th, 2023
 *
 *	Prints brightness value from photoresistor and turns LED
 *	off after a certain threshold is surpassed.
 *
 *  Photoresistor w/ LED circuit and code from: Michalis Vasilakis | Date: 8/6/2015 | www.ardumotive.com
*/ 

// Changeable parameters
#define READ_DELAY 500            // Delay between readings
#define BRIGHTNESS_THRESHOLD 300  // Threshold of light photoresistor gets before turning off
                                  // Higher means brighter

// Constants
const int pResistor = A0; // Photoresistor communicates through analog pin A0
const int led = 7;        // Led pin is controlled through pin 7

// Variables
int value;				  // Brightness value from photoresistor with range 0-1023

void setup(){
 pinMode(led, OUTPUT);  // Sets led to be of type output
 pinMode(pResistor, INPUT); // Sets photo resistor to be of type input
 Serial.begin(9600);  // Serial Read
}

void loop(){
  value = analogRead(pResistor);  // Reads the value of the photoresistor
  
  Serial.println(value); // Prints the value of the photo resistor (0-1023) to the console

  if (value > BRIGHTNESS_THRESHOLD){
    digitalWrite(led, LOW);           // Turn led off
  }
  else{
    digitalWrite(led, HIGH);            // Turn led on
  }

  delay(READ_DELAY); // Delay between each read
}