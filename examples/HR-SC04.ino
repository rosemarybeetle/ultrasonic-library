/*  Andrew Lewis first attempt at range findiing with the HR-SC04 

*/

#include "Ultrasonic.h"

Ultrasonic ultrasonic(12,13);

void setup() {

delay(1000);
Serial.begin(9600);       // use the serial port

}

void loop()
{
  
  Serial.println(ultrasonic.Ranging(CM));
  delay(100);
}



