#include <Arduino.h>

#include "config.h"

#include "WiFi.h"
#include "WiFiManager.h"

WiFiClient espClient;

void setup()
{
    Serial.begin(115200);
    Serial.println("Test minimal wifi firmware");

    WiFiManager manager;

    manager.setConnectRetries(WIFI_CONNECT_ATTEMPT);
    manager.setConnectTimeout(WIFI_CONNECT_TIMEOUT_S);
    manager.setConfigPortalTimeout(WIFI_CONFIG_PORTAL_TIMEOUT_S);


    bool success = manager.autoConnect(WIFI_MANAGER_STRING, WIFI_MANAGER_PASSWORD);

    if (!success) {
        Serial.println("Failed to connect");
    } else {
        Serial.println("Connect successful!");
    }
}

void loop() {
    
}