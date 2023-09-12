const int trigPin = 9;       // Trigger pin of the distance sensor
const int echoPin = 10;      // Echo pin of the distance sensor
const int relayPins[] = {0, 1, 2, 3, 4, 5, 6, 17}; // Pins connected to the relay module
const int buttonPin = 11;    // Pin for the push button

bool lightsOn = false;  // Variable to track if lights are on

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Enable the internal pull-up resistor for the button pin
  
  for (int i = 0; i < 8; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW); // Turn off all relays initially
  }
}

void loop() {
  // Check if the button is pressed to turn off the lights
  if (digitalRead(buttonPin) == LOW) {
    // Turn off all relays (and therefore, the lights)
    for (int i = 0; i < 8; i++) {
      digitalWrite(relayPins[i], LOW);
    }
    lightsOn = false;
    delay(500); // Debounce delay
  } else {
    // Trigger a pulse to measure distance
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure the pulse duration on the echo pin
    long duration = pulseIn(echoPin, HIGH);

    // Calculate the distance in centimeters
    float distance_cm = (duration / 2.0) * 0.0343;

    // Print the distance to the serial monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");

    // Check if the distance is less than 10 cm
    if (distance_cm < 10) {
      // Turn on all 8 relays (and therefore, the lights)
      for (int i = 0; i < 8; i++) {
        digitalWrite(relayPins[i], HIGH);
      }
      lightsOn = true;
    } else if (!lightsOn) {
      // If lights were off and no object is detected, turn them off
      for (int i = 0; i < 8; i++) {
        digitalWrite(relayPins[i], LOW);
      }
    }
  }
}
