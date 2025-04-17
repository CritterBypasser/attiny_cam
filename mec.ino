//void setup() {
//  DDRB=0B00000001;  
//  pinMode (8, OUTPUT);
//}

//void loop() {
//  PORTB=0B00000001;
//  delay(1000);
//  PORTB=0B00000000;
//  delay(1000);
//}





void setup(){
pinMode(PA2,OUTPUT);
}


void loop() {
digitalWrite(PA2,1);
delay(1000);
digitalWrite(PA2,0);
delay(1000);


}
