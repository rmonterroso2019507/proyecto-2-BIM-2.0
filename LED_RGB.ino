/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :2019507
 */
#define push_one 2
#define push_two 3
int GREEN=4;
int BLUE=5;
int RED=6;

void setup() {
pinMode(push_one,INPUT);//PIN 2 COMO ENTRADA
pinMode(push_two,INPUT);//PIN 3 COMO ENTRADA  
pinMode (RED, OUTPUT);//PIN 4 COMO SALIDA
pinMode (GREEN, OUTPUT);//PIN 5 COMO SALIDA
pinMode (BLUE, OUTPUT);//PIN 6 COMO SALIDA
Serial.println("roberto monterroso - 2019507");
Serial.println("practica no.3");
}


void loop() {
 if(digitalRead(push_one)==HIGH){  
digitalWrite(GREEN, HIGH); 
digitalWrite(BLUE, LOW); 
digitalWrite(RED, HIGH); 
} 
else if(digitalRead(push_two)==HIGH){  
digitalWrite(GREEN, HIGH); 
digitalWrite(BLUE, HIGH); 
digitalWrite(RED, LOW); 
} 

else if(digitalRead(push_one && push_two)==HIGH){   
digitalWrite(GREEN, LOW); 
digitalWrite(BLUE, HIGH); 
digitalWrite(RED, HIGH); 
} 
else if(digitalRead(push_one && push_two)==HIGH){   
digitalWrite(GREEN, HIGH); 
digitalWrite(BLUE, LOW); 
digitalWrite(RED, LOW); 
delay(500);
digitalWrite(GREEN, LOW); 
digitalWrite(BLUE, HIGH);
digitalWrite(RED, LOW); 
delay(500); 
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW); 
digitalWrite(RED, HIGH); 
delay(500);
} 
}
