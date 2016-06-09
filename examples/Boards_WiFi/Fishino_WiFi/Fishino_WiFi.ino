/**************************************************************
 * Blynk is a platform with iOS and Android apps to control
 * Arduino, Raspberry Pi and the likes over the Internet.
 * You can easily build graphic interfaces for all your
 * projects by simply dragging and dropping widgets.
 *
 *   Downloads, docs, tutorials: http://www.blynk.cc
 *   Blynk community:            http://community.blynk.cc
 *   Social networks:            http://www.fb.com/blynkapp
 *                               http://twitter.com/blynk_app
 *
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 *
 **************************************************************
 * This example shows how to use Fishino board to connect to
 * your project to Blynk.
 * 
 *
 * Require Fishino Lib: http://fishino.it/
 * Feel free to apply it to any other example. It's simple!
 *
 **************************************************************/

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <SPI.h>
#include <WiFi.h>
#include <BlynkSimpleFishino.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YourAuthToken";

// Your WiFi credentials
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";        // Set to "" for open networks

void setup()
{
  Serial.begin(9600);
  // initialize SPI
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV2);
  //Blynk.begin(auth, ssid, pass);
  Blynk.begin(auth, ssid, pass);
  // Or specify server using one of those commands:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, server_ip, port);
}

void loop()
{
  Blynk.run();
}

