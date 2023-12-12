const int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(13, OUTPUT);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println(HIGH);
  } else {
    digitalWrite(13, LOW);
    Serial.println(LOW);
  }

  
}
