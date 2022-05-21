# define led 3

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int i =0 ; i <=255 ; i++)
  {  
    analogWrite(led, i);
    delay(10);
  }
  for (int i =255 ; i >=0 ; i--)
  {  
  analogWrite(led, i);
  delay(10);
  }   
}