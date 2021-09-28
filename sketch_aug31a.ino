byte lm35= 0;
int nilai;

void setup(){
  Serial.begin(9600);
}

void loop(){
  nilai= analogRead(lm35);
  nilai= nilai*0.488;
  Serial.println(nilai);
  delay(500);
}
