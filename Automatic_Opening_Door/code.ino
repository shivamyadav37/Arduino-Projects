

int in1 = 5;
int in2 = 6;
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

  digitalWrite(led,LOW);

  while(millis()<15000)
  {
    digitalWrite(led,HIGH);
    delay(25);
    digitalWrite(led,LOW);
    delay(25);
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
   delay(4000);
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
   digitalWrite(led,LOW);
   delay(4000);
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   
  }

}
