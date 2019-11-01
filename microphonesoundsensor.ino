int sensorPin=2;
boolean val =0;
int value;
void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(A0, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val =0;
  val =digitalRead(sensorPin);
  value = analogRead(A0);
  Serial.println(value);
  if (val==HIGH) {
    Serial.println("have sound");
    delay(1000);
  }
    Serial.println ();
}
