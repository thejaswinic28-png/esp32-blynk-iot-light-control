#define BLYNK_TEMPLATE_ID "TMPL3xDFac_G6"
#define BLYNK_TEMPLATE_NAME "ESP32 IoT Light Control"
#define BLYNK_AUTH_TOKEN "Ik0fFkPYL3jy5nOJ3wXAvrXXVPeYax1l"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

#define LED_PIN 2

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  digitalWrite(LED_PIN, value);

  Serial.print("LED State: ");
  Serial.println(value);
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("ESP32 Connected to Blynk");
}

void loop()
{
  Blynk.run();
}