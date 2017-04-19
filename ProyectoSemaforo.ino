const int EchoPin = 12;
const int TriggerPin = 11;

int ledV = 6;
int ledR = 7;
int ledA = 5;
int PrimeraVez2 = true;
int PrimeraVez1 = true;

 
void setup() {
 Serial.begin(9600);
 pinMode(ledV, OUTPUT);
 pinMode(ledR , OUTPUT) ;
 pinMode(ledA , OUTPUT) ;
 pinMode(TriggerPin, OUTPUT);
 pinMode(EchoPin, INPUT);
}
 
void loop() {

  
 int cm = ping(TriggerPin, EchoPin);
 //Serial.print("Distancia: ");
 //Serial.println(cm);

  if (cm==0){
    Serial.println ("No hay sensor conectado1");
  };
  
  if (cm<40 && cm > 2 && PrimeraVez1 == true){
    
    digitalWrite(ledR, LOW);    // turn the LED off 
    delay(1000); 
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500);
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500);
    digitalWrite(ledV, HIGH);   // turn the LED on 

    
    PrimeraVez2 = true;
    PrimeraVez1 = false;
    
    };

  
    if (cm>40  && PrimeraVez2 == true) { 
      
    
    digitalWrite(ledV, LOW);    // turn the LED off 
    delay(1000); 
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500);
    digitalWrite(ledA, HIGH);   // turn the LED on 
    delay(500); 
    digitalWrite(ledA, LOW);   // turn the LED on 
    delay(500);
    digitalWrite(ledR, HIGH);   // turn the LED on
    PrimeraVez2 = false;
    PrimeraVez1 = true;
    
      };
      
    if (cm==0) { 
    
          //Encendemos el led verde
          
        digitalWrite(ledV, HIGH);   
        delay(10000);               
        digitalWrite(ledV, LOW);   
        delay(100);               
      
          // hacemos que el led Amaillo parpadee antes de encender el verde
          
        digitalWrite(ledA, HIGH);   
        delay(500);               
        digitalWrite(ledA, LOW);    
        delay(500);                 
        digitalWrite(ledA, HIGH);   
        delay(500);                
        digitalWrite(ledA, LOW);    
        delay(500);               
        digitalWrite(ledA, HIGH);   
        delay(500);                
        digitalWrite(ledA, LOW);    
        delay(500);               
        digitalWrite(ledA, HIGH);  
        delay(500);               
        digitalWrite(ledA, LOW);   
        delay(500);
                       
          //Encendemos el led verde
          
        digitalWrite(ledR, HIGH);   
        delay(10000);               
        digitalWrite(ledR, LOW);    


  
  
    };

}

//Funcion para controlar el sensor de distancia

int ping(int TriggerPin, int EchoPin) {
 long duration, distanceCm;
 
 digitalWrite(TriggerPin, LOW);
 delayMicroseconds(4);
 digitalWrite(TriggerPin, HIGH);  //generamos Trigger (disparo) de 10us
 delayMicroseconds(10);
 digitalWrite(TriggerPin, LOW);
 
 duration = pulseIn(EchoPin, HIGH);  //medimos el tiempo entre pulsos, en microsegundos
 
 distanceCm = duration * 10 / 292/ 2;   //convertimos a distancia, en cm
 return distanceCm;
}
