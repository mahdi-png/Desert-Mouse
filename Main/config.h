// config.h
#ifndef CONFIG_H
#define CONFIG_H

// Wi-Fi credentials
const char* ssid = "";           // Wi-Fi SSID
const char* password = ""; // Wi-Fi Password

// Pin Definitions
const int LED_PIN_R = 2; // Pin for the red LED
const int LED_PIN_G = 4; // Pin for the green LED
const int segPins[] = {26, 27, 13, 12, 14, 25, 33};  // Pins for 7-segment display segments (a-g)

#endif // CONFIG_H
