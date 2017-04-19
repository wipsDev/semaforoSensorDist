//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Proyecto Semaforo
// 
// Made by edgar hernandez molina
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4640335-the-unnamed-circuit

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledV = 5;
int ledR = 6;
int ledA = 7;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledV, OUTPUT);
  pinMode(ledR , OUTPUT) ;
  pinMode(ledA , OUTPUT) ;
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(ledV, HIGH);   // turn the LED on 
  delay(7000);               // wait 
  digitalWrite(ledV, LOW);    // turn the LED off
  delay(500);               // wait 
  
  digitalWrite(ledR, HIGH);   // turn the LED on 
  delay(1000);               // wait
  digitalWrite(ledR, LOW);    // turn the LED off 
  delay(1000);               // wait
  
  digitalWrite(ledA, HIGH);   // turn the LED on
  delay(2000);               // wait 
  digitalWrite(ledA, LOW);    // turn the LED off
  delay(500);               // wait
  
  
  // hacemos que el led rojo parpadee antes de encender el verde
  
  digitalWrite(ledA, HIGH);   // turn the LED on
  delay(500);               // wait 
  digitalWrite(ledA, LOW);    // turn the LED off
  delay(500);               // wait
  
  digitalWrite(ledA, HIGH);   // turn the LED on
  delay(500);               // wait 
  digitalWrite(ledA, LOW);    // turn the LED off
  delay(500);               // wait
  
  digitalWrite(ledA, HIGH);   // turn the LED on
  delay(500);               // wait 
  digitalWrite(ledA, LOW);    // turn the LED off
  delay(500);               // wait
  
}








