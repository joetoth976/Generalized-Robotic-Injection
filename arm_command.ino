#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <HCSR04.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
UltraSonicDistanceSensor distanceSensor(22, 23);
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

String incomingString = "0";
int typeString = 0;
String dataString = "0";
int type = 0;
int pwmv = 0;
int q1 = 0;
int q2 = 0;
int q3 = 0;

void setup() {
  // Initialize serial communication 
  Serial.begin(115200);
  // Initialize pwm communication
  pwm.begin();
  // Set onboard oscillator frequency
  pwm.setOscillatorFrequency(24000000);
  pwm.setPWMFreq(SERVO_FREQ);  
  delay(10);
}

void loop() {
  if (Serial.available() > 0) { 
    incomingString = Serial.readStringUntil('\n');
    typeString = incomingString.substring(0,1).toInt();
    dataString = incomingString.substring(1);
    switch (typeString) {
      // Configure Command
      case 1:  
        type = dataString.substring(0,1).toInt();
        pwmv = dataString.substring(1,4).toInt();
        if (type==1){
          pwm.setPWM(0,0,pwmv);
        }
        if (type==2){
          pwm.setPWM(1,0,pwmv);
        }
        if (type==3){
          pwm.setPWM(2,0,pwmv);
        }
        break;

      // Point Command
      case 2:  
        q1 = dataString.substring(0,3).toInt();
        q2 = dataString.substring(3,6).toInt();
        q3 = dataString.substring(6,9).toInt();
        pwm.setPWM(0,0,q1);
        pwm.setPWM(1,0,q2);
        pwm.setPWM(2,0,q3);
        break;

      // Point Command & Distance Send
      case 3:  
        q1 = dataString.substring(0,3).toInt();
        q2 = dataString.substring(3,6).toInt();
        q3 = dataString.substring(6,9).toInt();
        pwm.setPWM(0,0,q1);
        pwm.setPWM(1,0,q2);
        pwm.setPWM(2,0,q3);
        Serial.println(distanceSensor.measureDistanceCm());
        break;
    }
  }
}