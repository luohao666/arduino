// constants won't change. They're used here to set pin numbers:
const int buttonPin = 4;     // the number of the pushbutton pin
const int buttonPin2 = 6;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int pwmPin = 3;
const int pwmPin2 = 5;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(pwmPin, OUTPUT);
  pinMode(pwmPin2, OUTPUT);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(pwmPin, HIGH);
    delay(2);
    digitalWrite(pwmPin, LOW);
    delay(20 - 2);
  }
  else if (buttonState2 == HIGH)
  {
     // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(pwmPin2, HIGH);
    delay(2);
    digitalWrite(pwmPin2, LOW);
    delay(20 - 2);
  }  
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    digitalWrite(pwmPin, HIGH);
    digitalWrite(pwmPin2, HIGH);
    delay(1);
    digitalWrite(pwmPin, LOW);
    digitalWrite(pwmPin2, LOW);
    delay(20 - 1);
  }
}
