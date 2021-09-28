
#include <WiFi.h>;
 
const char* ssid = "RobotikID";
const char* password = "robotikid";

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
}
