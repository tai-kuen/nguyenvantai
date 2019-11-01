
void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorState = digitalRead(5);
    Serial.println(sensorState);
    delay(50);
    if(sensorState == HIGH)
    {
     Serial.println("地震です。避難してください。");
    }
    else
    {
     Serial.println("安全");
    }
}
