// Sample Arduino MAX6675 Arduino Sketch

#include "max6675.h"

int ktcSO = 8;
int ktcCS = 9;
int ktcCLK = 10;
double temp = 0;

MAX6675 ktc(ktcCLK, ktcCS, ktcSO);


void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  // give the MAX a little time to settle
  delay(500); 
  
}

void loop() {
  // basic readout test
int polimero = '0';

encender(290);
}

void encender( int temperatura){
    Serial.print("Deg C = ");
    Serial.print(ktc.readCelsius());    
    Serial.print("\t Deg F = ");
    Serial.println(ktc.readFahrenheit());
  
  if(ktc.readCelsius()<=temperatura){
    
     digitalWrite(12, HIGH);      
     if(ktc.readCelsius() > temp){
        temp = ktc.readCelsius();
         tone(13,993,50);
         delay(100);
         tone(13,193,50);
         delay(100);
         tone(13,993,50);
         Serial.println("Se ha elaevado un grado");
      }else{
         
         temp = ktc.readCelsius();
         
        }
      
           
    }else{
      
      digitalWrite(12, LOW);
      Serial.println("");
      }
  
  delay(500);
  noTone(13);
  }

