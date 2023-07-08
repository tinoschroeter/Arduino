// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, OUTPUT);
}

int waiting = 1;

// the loop function runs over and over again forever
void loop() {
  waiting++;
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  if(waiting % 5 == 0) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
