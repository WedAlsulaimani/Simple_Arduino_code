// Pin numbers
const int redLight = 13;
const int yellowLight = 12;
const int greenLight = 11;

void setup() {
  // Set each pin as OUTPUT
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  // Red light blinks
  digitalWrite(redLight, HIGH);
  delay(100); // 0.1 second
  digitalWrite(redLight, LOW);

  // Yellow light blinks
  digitalWrite(yellowLight, HIGH);
  delay(100);
  digitalWrite(yellowLight, LOW);

  // Green light blinks
  digitalWrite(greenLight, HIGH);
  delay(100);
  digitalWrite(greenLight, LOW);
}

