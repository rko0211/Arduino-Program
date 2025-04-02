#define LED 2

void setup() {
  // put your setup code here, to run once:
/*To set pin as output  */
pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  Turn ON the pin 

digitalWrite(LED,HIGH);
//Delay of 1 second
delay(1000);
digitalWrite(LED,LOW);
//delay
delay(1000);
}
