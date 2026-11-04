int switchOne = 0;
int switchTwo = 1;
int andLedPin = 10;

int switchThree = 2;
int switchFour = 3;
int orLedPin = 11;

int switchFive = 4;
int switchSix = 5;
int nandLedPin = 12;

int switchSeven = 6;
int switchEight = 7;
int norLedPin = 13;

void setup() {
  pinMode(switchOne, INPUT);
  pinMode(switchTwo, INPUT);
  pinMode(andLedPin, OUTPUT);
  
  pinMode(switchThree, INPUT);
  pinMode(switchFour, INPUT);
  pinMode(orLedPin, OUTPUT);
  
  pinMode(switchFive, INPUT);
  pinMode(switchSix, INPUT);
  pinMode(nandLedPin, OUTPUT);
  
  pinMode(switchSeven, INPUT);
  pinMode(switchEight, INPUT);
  pinMode(norLedPin, OUTPUT);
}

void loop() {
  bool buttonOne = digitalRead(switchOne);
  bool buttonTwo = digitalRead(switchTwo);
  
  bool buttonThree = digitalRead(switchThree);
  bool buttonFour = digitalRead(switchFour);
  
  bool buttonFive = digitalRead(switchFive);
  bool buttonSix = digitalRead(switchSix);
  
  bool buttonSeven = digitalRead(switchSeven);
  bool buttonEight = digitalRead(switchEight);
  
  if (buttonOne == HIGH && buttonTwo == HIGH) {
     digitalWrite(andLedPin, HIGH);
  } else {
    digitalWrite(andLedPin, LOW);
  }
  
  if (buttonThree == HIGH || buttonFour == HIGH) {
     digitalWrite(orLedPin, HIGH); 
  } else {
    digitalWrite(orLedPin, LOW);
  }
  
  if (buttonFive == HIGH && buttonSix == HIGH) {
     digitalWrite(nandLedPin, LOW);
  } else {
    digitalWrite(nandLedPin, HIGH);
  }

  if (buttonSeven == HIGH || buttonEight == HIGH) {
     digitalWrite(norLedPin, LOW); 
  } else {
    digitalWrite(norLedPin, HIGH);  
  }
}

