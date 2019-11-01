#include <WiFi.h>
const char *ssid = "ncktoyohashi";
const char *pw = "123456789";

void setup() {
  Serial.begin(115200);

  Serial.println("IoT Example: ESP to WIFI");
  Serial.print("Dang ket noi toi WiFi ");
  Serial.print(ssid);

  WiFi.begin(ssid, pw);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println();
  Serial.println("Ket noi thanh cong!");
  // Xuất địa chỉ IP được cấp bởi thiết bị router
  Serial.print("Dia chi IP: ");
  Serial.println(WiFi.localIP());
}
void loop() {
  
}
