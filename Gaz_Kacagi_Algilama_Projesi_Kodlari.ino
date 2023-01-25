int esikDegeri = 300; //Gaz eşik değerini belirliyoruz.    
int buzzerPin = 3; //Buzzerın takılacağı pin
int deger; //Sensörden okunan değer
int Led = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT); //Buzzer pinimizi çıkış olarak ayarlıyoruz.
  pinMode(Led, OUTPUT);
}

void loop() {
  deger = analogRead(A0); //Sensörden analog değer okuyoruz.
  if (deger > esikDegeri) { //Sensörden okunan değer eşik değerinden büyükse çalışır.
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(Led, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
    digitalWrite(Led, LOW);
    delay(100);
  } else { //Sensörden okunan değer eşik değerinin altındaysa çalışır.
    digitalWrite(buzzerPin, LOW);
  digitalWrite(Led, LOW);
  }
  
}
