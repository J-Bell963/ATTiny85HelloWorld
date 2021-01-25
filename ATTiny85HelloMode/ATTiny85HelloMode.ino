// variable declaration 
int led = 1;
int but = 0;

int butVal = 0;
int butCount = 0;
int prevButVal = 0;
int ledState = LOW;

// timer variables
unsigned long previousMillis = 0;
const long interval = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(but, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  butVal = digitalRead(but); // reading button imput values
  unsigned long currentMillis = millis(); // timer declaration 
  if (butVal != prevButVal) { // state contol
    if (butVal == HIGH) {
      butCount++;
      if (butCount > 2) { // state reseting 
        butCount = 0;
      }
    }
  }

  prevButVal = butVal;

// first state
  if (butCount == 0) {
    digitalWrite(led, HIGH);
  }

  // second state
  else if (butCount == 1) {
    digitalWrite(led, LOW);
  }

  // third state
  else if (butCount = 2) {
    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
    } else {
      ledState = LOW;
    }
     digitalWrite(led, ledState);
    }
  }
}
