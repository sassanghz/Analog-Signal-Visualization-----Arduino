int pwmPin = 9;

void setup(){
    pinMode(pwmPin, OUTPUT);
}

void loop() {
  // Sweep duty cycle from 0% to 100%
  for (int duty = 0; duty <= 255; duty++) {
    analogWrite(pwmPin, duty);
    delay(10);
  }
  // Sweep back down
  for (int duty = 255; duty >= 0; duty--) {
    analogWrite(pwmPin, duty);
    delay(10);
  }
}