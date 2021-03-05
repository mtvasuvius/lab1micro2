#define greenLED 41
#define yellowLED 43
#define redLED 45
#define switchPin 31
#define buzzerPin 51

void setup() {

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(switchPin,INPUT_PULLUP);
  pinMode(buzzerPin,OUTPUT);

  Serial.begin(9600);
  
  while((digitalRead(switchPin))) 
  {
    digitalWrite(redLED, HIGH);
    delay(200);
    digitalWrite(redLED, LOW);
    delay(500);      
  }
}

void loop() {

  digitalWrite(redLED, HIGH);
  delay(12000);
  digitalWrite(buzzerPin, HIGH);
  delay(3000);
  digitalWrite(redLED, LOW);
  digitalWrite(buzzerPin, LOW);

  digitalWrite(greenLED, HIGH);
  delay(12000);
  digitalWrite(buzzerPin, HIGH);
  delay(3000);
  digitalWrite(greenLED, LOW);
  digitalWrite(buzzerPin, LOW); 

  digitalWrite(yellowLED, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(3000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(buzzerPin, LOW);  
   
}
