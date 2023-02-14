const int buzzerbutton=9;
void setup() {
 
pinMode(9,OUTPUT);
}
void loop() {
 tone(buzzerbutton,HIGH);
 delay(5000);// put your main code here, to run repeatedly:
noTone(buzzerbutton);
delay(4000);
}
