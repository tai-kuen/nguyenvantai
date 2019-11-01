
void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorState = analogRead(35);
    Serial.println(sensorState);
    delay(50);
