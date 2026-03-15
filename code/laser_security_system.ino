#include <SoftwareSerial.h>

SoftwareSerial gsm(7, 8); // TX, RX for SIM900A
const int ldrPin = A0;     // LDR connected to A0
const int threshold = 300; // Adjust based on environment
bool callMade = false;     // To prevent continuous calls

void setup() {
    gsm.begin(9600);   // GSM module baud rate
    Serial.begin(9600); // Serial monitor for debugging

    delay(1000);
    Serial.println("Initializing...");

    gsm.println("AT"); // Check GSM module
    delay(1000);
    Serial.println("Checking GSM module...");
}

void makeCall(String phoneNumber) {
    Serial.println("Calling: " + phoneNumber);
    gsm.print("ATD");
    gsm.print(phoneNumber);
    gsm.println(";");
    delay(30000);  // Call duration (30 seconds)

    gsm.println("ATH");  // Hang up the call
    Serial.println("Call Ended");
    callMade = true;  // Prevent continuous calling
}

void loop() {
    int lightIntensity = analogRead(ldrPin); // Read LDR sensor
    Serial.print("LDR Value: ");
    Serial.println(lightIntensity);

    if (lightIntensity < threshold && !callMade) {
        makeCall("+917569184052"); //add your phone number here 
        delay(60000); // Cooldown period (1 minute)
        callMade = false; // Reset for next detection
    }

    delay(500); // Small delay before next read
} 
