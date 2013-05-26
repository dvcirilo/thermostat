#include <OneWire.h>
#include <Wire.h> 

unsigned int data1, data2, data3, data4;
//OneWire  ds(52);  // on pin 52

void setup(void) {
//  Serial.begin(9600);
//  
//  ds.reset();
//  ds.write(0x01); //write th
//  ds.write(29); //29 celsius, eu acho
//  delay(50);
//  
//  ds.reset();
//  ds.write(0x02); //write tl
//  ds.write(27); //27 celsius
//  delay(50);
//  
//  ds.reset();
//  ds.write(0x0C); //write configuration
//  ds.write(B11000011); //go figure
//  delay(50);
//  
//  ds.reset();
//  ds.write(0xA1); //read th
//  data1 = (unsigned int) ds.read();
//  
//  ds.reset();
//  ds.write(0xA2); //read tl
//  data2 = (unsigned int) ds.read();
//  
//  ds.reset();
//  ds.write(0xAC); //read status
//  data3 = (unsigned int) ds.read();

  pinMode(53, OUTPUT);
  pinMode(52, INPUT);

}

void loop(void){
//  ds.reset();
//  ds.write(0xEE);
//  delay(100);
//  
//  ds.reset();
//  ds.write(0xAA);
//  data4 = (unsigned int) ds.read();
//  
//  
//  Serial.println(data1);
//  Serial.println(data2);
//  Serial.println(data3, BIN);
//  Serial.println(data4);
  digitalWrite(53,digitalRead(52));
  //digitalWrite(53, 1);
  delay(10);
}
