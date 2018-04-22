#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "xxxxx";
char ssid[] = "xxxxx";
char pass[] = "xxxxx";

BLYNK_WRITE(V0)//white
{
  if (param.asInt()){
    digitalWrite(14, HIGH);
  }else{
    digitalWrite(14, LOW);
  }
}

void setup()
{

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
