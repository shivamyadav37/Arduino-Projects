

nt in1 = 2;
int in2 = 3;
int sensor = 8;
int led = 13;

void setup() 
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  //digitalWrite(sensor,LOW);
  digitalWrite(led,LOW);

  while(millis()<13000)
  {
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(50);
  }
  digitalWrite(led,LOW);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
}

void loop() 
{
  if(digitalRead(sensor)==HIGH)
  {
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   digitalWrite(led,HIGH);
   delay(2000);
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
   digitalWrite(led,LOW);
   delay(2000);
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   
  }

}
