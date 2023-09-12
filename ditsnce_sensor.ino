const int trigPin = 9; // Trigger pin
const int echoPin = 10; // Echo pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  for (int i = 1; i <= 100; i++) {
    // Trigger a pulse to measure distance
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure the pulse duration on the echo pin
    long duration = pulseIn(echoPin, HIGH);

    // Calculate the distance in centimeters
    // (Speed of sound is approximately 343 meters per second)
    float distance_cm = (duration / 2.0) * 0.0343;

    // Print the distance to the serial monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");

    delay(1000); // Wait for a moment before taking the next reading
  }
  while (true) {
    // This will keep the Arduino looping indefinitely after printing 1 to 100
    // You can add any other logic you want here
  }
}
