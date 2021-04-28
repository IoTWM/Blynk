/**********************************************************************************
 *  TITLE: Blinking a LED using Blink App and ESP8266
 *  Click on the following links to learn more. 
 *  YouTube Video: https://www.youtube.com/channel/UCscQZ6FyFrx3dKgsPSPOVGQ
 *  by IoT withme
 *  
 *  Github link :
 *  https://github.com/IoTWM
 **********************************************************************************/


#define BLYNK_PRINT Serial  
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "ITCU-Xs1oDI5j9belA0idU4m4RFco6LJ";              //Authorisation key
char ssid[] = "abcdefgh";                                      //SSID
char pass[] = "12345678";                                      //Password

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(4)                                                 //D2- GOIO04
{
  int pinvalue=param.asInt();
  Serial.println(pinvalue);
}

void loop()
{
  Blynk.run();
}
