void setup() {
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() {
for(int i=1;i<6;i++){
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
}
delay(1000);
for(int a=1;a<6;a++){
digitalWrite(1,LOW);
digitalWrite(2,LOW);
}
}
