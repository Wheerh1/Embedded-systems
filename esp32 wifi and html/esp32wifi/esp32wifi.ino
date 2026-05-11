// https://www.upesy.com/blogs/tutorials/how-to-connect-wifi-acces-point-with-esp32?srsltid=AfmBOoqQBhZLgcI-qfrYfZ7jyCO804eydkJHzT4LjGlJN8NxExYnBcIt
#include <WiFi.h>

const char* ssid = "D_Block_Lab";
const char* password = "P@ssw0rd";

void setup(){
    Serial.begin(115200);
    delay(1000);

    WiFi.mode(WIFI_STA); //Optional
    WiFi.begin(ssid, password);
    Serial.println("\nConnecting");

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }

    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
}

void loop(){}