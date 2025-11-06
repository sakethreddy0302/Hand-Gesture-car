void setup() {
 pinMode(2,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(7,INPUT);
 pinMode(13,OUTPUT);
Serial.begin(9600);
//delay(5000);
}
void loop() 
{
if(digitalRead(7)==HIGH)
{
  Serial.println('F');
  digitalWrite(13,HIGH);
}
if(digitalRead(7)==LOW)
{
  Serial.println('S');
  digitalWrite(13,LOW);
}
}
 
 
