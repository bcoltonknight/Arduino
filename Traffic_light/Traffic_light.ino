void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);

  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(3000);
  for(int i = 0; i < 15; i++){
    delay(100);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  for(int k = 0; k < 7; k++){
    delay(500); 
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  for(int j = 0; j < 15; j++){
    for(int a = 13; a >5; a--){
      digitalWrite(a, HIGH);
      delay(250);
      digitalWrite(a, LOW);
      delay(250);
    }
    for(int b = 6; b <14; b++){
      digitalWrite(b, HIGH);
      delay(250);
      digitalWrite(b, LOW);
      delay(250);
    }
  }
  
  
}
