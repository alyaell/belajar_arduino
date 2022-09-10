int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED,OUTPUT);
  Serial.begin(9600);//menyiapkan serial monitor 
  Serial.println("alat menyala dan siap digunakan!");

 
  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED,HIGH);//Mematikan LED
  Serial.println("lampu menyala");
  delay(50);
  digitalWrite(pinLED,LOW);//Menyalakan LED
   Serial.println("lampu mati");
 delay(100);

  digitalWrite(pinLED,HIGH);//Mematikan LED
  delay(50);
  digitalWrite(pinLED,LOW);//Menyalakan LED
  delay(100);
  



 
}
