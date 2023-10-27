// variable deceleration 
int led = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // setting LED to on
  delay(500);
  digitalWrite(led, LOW); // setting LED to off
  delay(500);
}
