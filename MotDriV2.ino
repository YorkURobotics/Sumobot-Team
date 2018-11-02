
////////////////////////////
//////// 3DBot I1D0 ////////
////// By: Ian Gregor //////
// YURS Sumobot Team lead //
////////////////////////////

///////////////////////
// Test;
// Motor Direction 
// Speed vs. Strength
// rotation
///////////////////////

#include <SparkFun_TB6612.h>

// Motor Driver
#define AIN1 2
#define BIN1 7
#define AIN2 4
#define BIN2 8
#define PWMA 5
#define PWMB 6
#define STBY 9

// Peripherals
#define butPin 0
#define LEDpin 13
#define IRpinA A5
#define IRpinB A4

//LED
int LED = 12;

// Initializing motors
Motor motorA = Motor(AIN1, AIN2, PWMA, 1, STBY);
Motor motorB = Motor(BIN1, BIN2, PWMB, 1, STBY);


void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{

}
