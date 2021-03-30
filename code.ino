int light_Sensor = A0;
int analogValue;
int led = D7;

void setup() {
 pinMode(led, OUTPUT);
 pinMode(light_Sensor,INPUT);
} 
void loop() { 
    analogValue = analogRead(light_Sensor);
    delay(1000);

   if (analogValue > 0 && analogValue < 300 ) 
   { 
       digitalWrite(led, LOW);
       Particle.publish("Light_Is_On", "Light", PRIVATE);
       delay(15000);
   } 
   else 
   {
       digitalWrite(led, HIGH);
       Particle.publish("Light_Is_Off", "Dark", PRIVATE); 
        delay(15000);
    } 
} 
