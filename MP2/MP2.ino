#define DELAY_MS 200

const uint8_t redPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH);
  delay(DELAY_MS);
  digitalWrite(redPin, LOW);
  delay(DELAY_MS);
}




