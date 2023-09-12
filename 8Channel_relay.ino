const int relayPins[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Pins connected to the relay module

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW); // Turn off all relays initially
  }
}

void loop() {
  // Control the LEDs using the relays

  // Turn on all 8 relays (and therefore, the LEDs)
  for (int i = 0; i < 8; i++) {
    digitalWrite(relayPins[i], HIGH);
  }
  
  delay(1000); // Wait for 1 second with all LEDs on

  // Turn off all relays (and therefore, the LEDs)
  for (int i = 0; i < 8; i++) {
    digitalWrite(relayPins[i], LOW);
  }

  delay(1000); // Wait for 1 second with all LEDs off
}
