int infrared = 4;
 
void setup()
{
  Serial.begin(115200);
  pinMode(infrared, INPUT_PULLUP);
}
void loop() 
{
  if(digitalRead(infrared) == 0)
  {
    Serial.println("có vật cản");
    delay(1000);
  }
  else
  {   
    delay(1000);
  }
}
