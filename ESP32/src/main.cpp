//Working on finishing this code
#include <Arduino.h>
#include <WiFiClientSecure.h>

#define red 13
#define green 14
#define blue 12

const char* ssid = "Wifi_ssid";
const char* password = "wifi_password";

WiFiServer server(80);
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
String redString = "0";
String greenString = "0";
String blueString = "0";
const int freq = 5000;
const int redCh = 0;
const int greenCh = 1;
const int blueCh = 2;
const int res = 8;
String header;
unsigned long currentTime = millis();
unsigned long previousTime = 0; 
const long timeoutTime = 2000;

void setup(){
Serial.begin(115200);
ledcSetup(redCh, freq, res);
ledcSetup(greenCh, freq, res);
ledcSetup(blueCh, freq, res);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);  
pinMode(blue, OUTPUT);       
Serial.println();Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected.");
Serial.println("IP address: ");
Serial.println(WiFi.localIP());
server.begin();
}
void loop(){
WiFiClient client = server.available();   
}
