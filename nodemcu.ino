/*
              - - Hazırlayanlar - -
    Mehmet Cambolat - cambolatmemo42@gmail.com
    Emre Cambolat - cambolatemre@outlook.com

*/
/*
  Proje klasörü: https://drive.google.com/drive/folders/1w4_LkHCMeWtT7XBiYP5sI2Mg_6xVEpm6?usp=sharing
  Projenin çalışır halde videosu: https://drive.google.com/file/d/1Mxun4x0nEGOjDGoFR4ouLrvydTjJQXb8/view
*/

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] ="rMTmBpoyJS0a7UPzzhla2S-zyGXxjX5P";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "MAX-PAYNE";
char pass[] = "pisagor1453";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
   
}
