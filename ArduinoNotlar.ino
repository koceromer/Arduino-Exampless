//////ARDUİNO ÜZERİNDEKİ TEK LEDİ HIZLIDAN YAVAŞA YAKIP SÖNDÜRME///////
//int sure = 250;
//void setup() 
//{
//   put your setup code here, to run once:
//  pinMode(13,OUTPUT);
//}
//
//void loop() 
//{
//   put your main code here, to run repeatedly:
//  for (int i = 1; i < 500; i = i+50)
//  {   
//    digitalWrite(13,HIGH);
//    delay(i);
//    digitalWrite(13,LOW);
//    delay(i);
//  }
//}
///////TUŞ TAKIMI ÜZERİNDEKİ KIRMIZ LEDLERİ SIRAYLA YAKIP SÖNDÜRME/////////
//int sure = 10;
//void setup()
//{
//  for (int i = 2; i < 10; i++)
//  {
//  pinMode(i,OUTPUT);
//  }
//  
//}
//void loop()
//{
//  for (int i =2; i < 10; i++)
//  {
//  digitalWrite(i,LOW);
//  delay(sure);
//  digitalWrite(i,HIGH);
//  delay(sure);
//  }
//}










//
//
//const int ledPin1 = 2; // 1. LED'in bağlı olduğu pin
//const int ledPin2 = 3; // 2. LED'in bağlı olduğu pin
//const int ledPin3 = 4; // 3. LED'in bağlı olduğu pin
//
//const int buttonPin = 5; // Tuşun bağlı olduğu pin
//
//int currentShape = 1; // Şu anki şekil numarası
//int lastButtonState = HIGH; // Önceki tuş durumu
//int buttonState; // Güncel tuş durumu
//
//void setup() {
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(ledPin3, OUTPUT);
//  pinMode(buttonPin, INPUT_PULLUP);
//}
//
//void loop() {
//  buttonState = digitalRead(buttonPin); // Tuş durumunu oku
//
//  if (buttonState == LOW && lastButtonState == HIGH) { // Tuşa basıldığında
//    currentShape++; // Şekil numarasını bir arttır
//    if (currentShape > 3) { // Şekil numarası 3'ten büyükse sıfırla
//      currentShape = 1;
//    }
//    changeShape(currentShape); // Şekli değiştir
//  }
//
//  lastButtonState = buttonState; // Önceki tuş durumunu güncelle
//}
//
//void changeShape(int shape) {
//  // Şekle göre LED'leri açma ve kapama işlemleri
//  while (shape > 0) {
//    if (shape == 1) {
//      digitalWrite(ledPin1, HIGH);const int ledPin1 = 2; // 1. LED'in bağlı olduğu pin




//
//const int ledPin1 = 2; 
//const int ledPin2 = 3; 
//const int ledPin3 = 4; 
//
//const int buttonPin = 1; 
//
//int currentShape = 1; 
//int lastButtonState = HIGH; 
//int buttonState; 
//
//void setup() {
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(ledPin3, OUTPUT);
//  pinMode(buttonPin, INPUT_PULLUP);
//}
//
//void loop() {
//  buttonState = digitalRead(buttonPin); 
//
//  if (buttonState == LOW && lastButtonState == HIGH) { // Tuşa basıldığında
//    currentShape++; // Şekil numarasını bir arttır
//    if (currentShape > 3) { // Şekil numarası 3'ten büyükse sıfırla
//      currentShape = 1;
//    }
//    changeShape(currentShape); // Şekli değiştir
//  }
//
//  lastButtonState = buttonState; 
//}
//
//void changeShape(int shape) {
//  
//  if (shape == 1) {
//    digitalWrite(ledPin1, HIGH);
//    digitalWrite(ledPin2, LOW);
//    digitalWrite(ledPin3, LOW);
//  } else if (shape == 2) {
//    digitalWrite(ledPin1, LOW);
//    digitalWrite(ledPin2, HIGH);
//    digitalWrite(ledPin3, LOW);
//  } else if (shape == 3) {
//    digitalWrite(ledPin1, LOW);
//    digitalWrite(ledPin2, LOW);
//    digitalWrite(ledPin3, HIGH);
//  }
//}











//const int ledPin2 = 3; // 2. LED'in bağlı olduğu pin
//const int ledPin3 = 4; // 3. LED'in bağlı olduğu pin
//
//const int buttonPin = 5; // Tuşun bağlı olduğu pin
//
//int currentShape = 1; // Şu anki şekil numarası
//int lastButtonState = HIGH; // Önceki tuş durumu
//int buttonState; // Güncel tuş durumu
//
//void setup() {
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(ledPin3, OUTPUT);
//  pinMode(buttonPin, INPUT_PULLUP);
//}
//
//void loop() {
//  buttonState = digitalRead(buttonPin); // Tuş durumunu oku
//
//  if (buttonState == LOW && lastButtonState == HIGH) { // Tuşa basıldığında
//    currentShape++; // Şekil numarasını bir arttır
//    if (currentShape > 3) { // Şekil numarası 3'ten büyükse sıfırla
//      currentShape = 1;
//    }
//    changeShape(currentShape); // Şekli değiştir
//  }
//
//  lastButtonState = buttonState; // Önceki tuş durumunu güncelle
//}
//
//void changeShape(int shape) {
//  // Şekle göre LED'leri açma ve kapama işlemleri
//  if (shape == 1) {
//    digitalWrite(ledPin1, HIGH);
//    digitalWrite(ledPin2, LOW);
//    digitalWrite(ledPin3, LOW);
//  } else if (shape == 2) {
//    digitalWrite(ledPin1, LOW);
//    digitalWrite(ledPin2, HIGH);
//    digitalWrite(ledPin3, LOW);
//  } else if (shape == 3) {
//    digitalWrite(ledPin1, LOW);
//    digitalWrite(ledPin2, LOW);
//    digitalWrite(ledPin3, HIGH);
//  }
//}
//      digitalWrite(ledPin2, LOW);
//      digitalWrite(ledPin3, LOW);
//    } else if (shape == 2) {
//      digitalWrite(ledPin1, LOW);
//      digitalWrite(ledPin2, HIGH);
//      digitalWrite(ledPin3, LOW);
//    } else if (shape == 3) {
//      digitalWrite(ledPin1, LOW);
//      digitalWrite(ledPin2, LOW);
//      digitalWrite(ledPin3, HIGH);
//    }
//    shape--; // Şekil numarasını azaltarak döngüden çık
//  }
//}
////////////////
//boolean giris = HIGH;
//void setup()
//{
//  for (int i = 2; i < 10; i++)
//  {
//  pinMode(i,OUTPUT);
//  digitalWrite(i,HIGH);
//  }
//  pinMode(11,INPUT);
//}
//void loop()
//{
//   giris=digitalRead(11);
//   if(giris==LOW)
//   {
//    digitalWrite(2,LOW);
//    
//   }  
//   
//}
////////////////////
//boolean giris = HIGH;
//void setup()
//{
//  for (int i = 2; i < 10; i++)
//  {
//  pinMode(i,OUTPUT);
//  digitalWrite(i,HIGH);
//  }
//  pinMode(11,INPUT);
//}
//void loop()
//{
//   giris=digitalRead(11);
//   if(giris==LOW)
//   {
//    digitalWrite(2,LOW);
//    
//   }  
//   digitalWrite(2,HIGH);
//}
/////////////

//boolean giris = HIGH;
//void setup()
//{
//  for (int i = 2; i < 10; i++)
//  {
//  pinMode(i,OUTPUT);
//  digitalWrite(i,HIGH);
//  }
//  pinMode(11,INPUT);
//}
//void loop()
//{
//   
//   if(digitalRead(10)==LOW)
//   
//   
//   {
//    delay(50);
//    digitalWrite(2,led=!led);
//    while(digitalRead(11)==LOW)();
//   }
//    
//}
//
//
//boolean giris = HIGH;
//void setup()
//{
//  for (int i = 2; i < 10; i++)
//  {
//  pinMode(i,OUTPUT);
//  digitalWrite(i,HIGH);
//  }
//  pinMode(11,INPUT);
//}
//void loop()
//{
//
//   if(digitalRead(10)==LOW)
//   
//   
//   {
//    delay(50);
//    digitalWrite(2,led=!led);
//    while(digitalRead(11)==LOW);
//   }
//}
////////////////////derste işlediğimiz ///////////animasyon led yakma ///////////////
//int sure=100;
//boolean led=LOW;
//void setup() 
//{
//  Serial.begin(9600);
//  
//  for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,LOW);
//
//  }
//
//    delay(1500);
//
//  for(int i=0;i<9;i++)
//  {
//    digitalWrite(i+2,HIGH);
//    
//  }
//}
//
//void loop() 
//{
//   
//  for(int j=0; j<5;j++)
//  {
//   for(int i=0; i<9;i++)
//   { 
//  
//     digitalWrite(i+2,LOW);
//     delay(sure);
//     digitalWrite(i+2,HIGH);
//     delay(sure);
//
//   }
//  }
//  
//  Serial.println ("BIRINCI ANIMASYON BITTI*****");
//  delay(1000);
//
//  for(int j=0; j<10;j++)
//  {
//    for(int i=0; i<9;i++)
//    {
//      if(i<4)
//      { 
//        digitalWrite(i+2,led);
//      }
//      else
//      {
//        digitalWrite(i+2,!led);
//      }
//    }  
//    led=!led;
//    delay(sure*4);
//  }
//  
//  Serial.println ("IKINCI ANIMASYON BITTI*****");
//  delay(1000);
//
//}
//////////////basınca yak sadece ////////////////////////
//#define s1 10
//#define s2 11
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
//
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//  {
//    digitalWrite(2,LOW);
//  }
//  else
//  {
//    digitalWrite(2,HIGH);
//    
//  }
//}
//////////////////bas yak bas söndür ///////////////////
//#define s1 10
//#define s2 11

/////////////////////////////////////////////
//boolean led = HIGH;
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
//
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//  {
//    digitalWrite(2,led=!led);
//    delay(150);
//    while(digitalRead(s1)==0){}
//  }
// 
//}

////////////bir led ile yak diğeri ile söndür tüm ledleri/////////////////////
//int sure =200;
//#define s1 10
//#define s2 11
//
//
//void setup()
//{
//  Serial.begin(9600);
//  
//  for(int i=2;i<10;i++)
//  {
//    pinMode(i,OUTPUT);
//    digitalWrite(i,LOW);
//    delay(sure);
//    digitalWrite(i,HIGH);
//  }
//  pinMode(10,INPUT);
//  pinMode(11,INPUT);
//}
//
//void loop()
//{
//  if(digitalRead(s1)==LOW)
//  {
//    delay(200);
//    while(digitalRead(s1)==LOW){delay(100);}
//    for(int i=2;i<10;i++)
//    {
//      digitalWrite(i,LOW);
//    } 
//    Serial.println("****Ledler Yandı****");
//  }
//  if(digitalRead(s2)==LOW)
//    {
//      delay(200);
//      while(digitalRead(s2)==LOW){delay(100);}
//      for(int i=2;i<10;i++)
//      {
//        digitalWrite(i,HIGH);
//      } 
//      Serial.println("****Ledler Sondu****");
//    }
//    //delay(1000);
//}
///////////////////////////////////////
//#define s1 10
//#define s2 11
//#define s3 12
//#define s4 13
//
//boolean led = HIGH;
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
//  pinMode(s3,INPUT_PULLUP);
//  pinMode(s4,INPUT_PULLUP);
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//  {
//    digitalWrite(2,led=!led);
//    delay(150);
//    while(digitalRead(s1)==0){}
//  }
//  
//  
//  if(digitalRead(s2)==0)
//  {
//    digitalWrite(3,led=!led);
//    delay(150);
//    while(digitalRead(s2)==0){}
//  }
//  
//  
//   if(digitalRead(s3)==0)
//  {
//    digitalWrite(4,led=!led);
//    delay(150);
//    while(digitalRead(s3)==0){}
//  }
//  
//  
//   if(digitalRead(s4)==0)
//  {
//    digitalWrite(5,led=!led);
//    delay(150);
//    while(digitalRead(s4)==0){}
//  }
//  
//  
//}



//#define s1 10
//#define s2 11
//#define s3 12
//#define s4 13
//
//boolean led = HIGH;
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
//  pinMode(s3,INPUT_PULLUP);
//  pinMode(s4,INPUT_PULLUP);
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//  {
//    digitalWrite(2,led=!led);
//    delay(150);
//    while(digitalRead(s1)==0){}
//  }
//  
//  
//  if(digitalRead(s2)==0)
//  {
//    digitalWrite(3,led=!led);
//    delay(150);
//    while(digitalRead(s2)==0){}
//  }
//  
//  
//   if(digitalRead(s3)==0)
//  {
//    digitalWrite(4,led=!led);
//    delay(150);
//    while(digitalRead(s3)==0){}
//  }
//  
//  
//   if(digitalRead(s4)==0)
//  {
//    digitalWrite(5,led=!led);
//    delay(150);
//    while(digitalRead(s4)==0){}
//  }
//  
//  
//}


//#define s1 10
//#define s2 11
//#define s3 12
//#define s3 13
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
////  pinMode(s3,INPUT_PULLUP);
////  pinMode(s4,INPUT_PULLUP);
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//    {
//      digitalWrite(2,LOW);
//    }
//    else
//    {
//      digitalWrite(2,LOW);
//    
//    }
//  if(digitalRead(s2)==0)
//    {
//      digitalWrite(3,LOW);
//    }
//    else
//    {
//      digitalWrite(3,LOW);
//      
//    }
//}

//
//#define S1 10
//#define S2 11
//#define S3 12
//#define S4 13
//
//boolean led1 = HIGH;
//boolean led2 = HIGH;
//boolean led3 = HIGH;
//boolean led4 = HIGH;
//
//void setup() {
//  pinMode(S1, INPUT_PULLUP);
//  pinMode(S2, INPUT_PULLUP);
//  pinMode(S3, INPUT_PULLUP);
//  pinMode(S4, INPUT_PULLUP);
//
//  for (int i = 0; i < 9; i++) 
//  {
//    pinMode(i + 2, OUTPUT);
//    digitalWrite(i + 2, HIGH);
//  }
//}
//
//void loop() {
//  if (digitalRead(S1) == LOW) 
//  {
//    led1 = LOW;
//    led2 = HIGH;
//    led3 = HIGH;
//    led4 = HIGH;
//  }
//
//  if (digitalRead(S2) == LOW) 
//  {
//    led1 = HIGH;
//    led2 = LOW;
//    led3 = HIGH;
//    led4 = HIGH;
//  }
//
//  if (digitalRead(S3) == LOW) 
//  {
//    led1 = HIGH;
//    led2 = HIGH;
//    led3 = LOW;
//    led4 = HIGH;
//  }
//
//  if (digitalRead(S4) == LOW) 
//  {
//    led1 = HIGH;
//    led2 = HIGH;
//    led3 = HIGH;
//    led4 = LOW;
//  }
//
//  digitalWrite(2, led1);
//  digitalWrite(3, led2);
//  digitalWrite(4, led3);
//  digitalWrite(5, led4);
//}

//#define s1 10
//#define s2 11
//
//boolean led = HIGH;
//void setup()
//{
//  pinMode(s1,INPUT_PULLUP);
//  pinMode(s2,INPUT_PULLUP);
//
//
//   for(int i=0;i<9;i++)
//  {
//    pinMode(i+2,OUTPUT);
//    digitalWrite(i+2,HIGH);
//  }
//}
//
//void loop()
//{
//  if(digitalRead(s1)==0)
//  {
//    digitalWrite(2,led=!led);
//    
//    delay(150);
//    while(digitalRead(s1)==0){}
//  }
// 
//}

//#define S1 10
//#define S2 11
//#define S3 12
//#define S4 13
//int sure = 150;
//
//void setup() {
//  pinMode(S1, INPUT_PULLUP);
//  pinMode(S2, INPUT_PULLUP);
//  pinMode(S3, INPUT_PULLUP);
//  pinMode(S4, INPUT_PULLUP);
//
//  for (int i = 2; i < 10; i++) {
//    pinMode(i, OUTPUT);
//    digitalWrite(i, HIGH);
//  }
//}
//
//void loop() {
//  if (digitalRead(S1) == LOW) {
//    delay(sure);
//
//    // Ayarla(2,6,4);
//
//    while (digitalRead(S1) == LOW)
//    {
//      digitalWrite(2, LOW);
//      delay(sure);
//      digitalWrite(2, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S2) == LOW) {
//   delay(sure);
//
//    // Ayarla(2,6,4);
//
//    while (digitalRead(S2) == LOW)
//    {
//      digitalWrite(3, LOW);
//      delay(sure);
//      digitalWrite(3, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S3) == LOW)
//  {
//    delay(sure);
//
//    // Ayarla(2,6,4);
//
//    while (digitalRead(S3) == LOW)
//    {
//      digitalWrite(4, LOW);
//      delay(sure);
//      digitalWrite(4, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S4) == LOW) {
//    delay(sure);
//
//    // Ayarla(2,6,4);
//
//    while (digitalRead(S4) == LOW)
//    {
//      digitalWrite(5, LOW);
//      delay(sure);
//      digitalWrite(5, HIGH);
//      delay(sure);
//    }
//  }
//
//}
//
//#define S1 10
//#define S2 11
//#define S3 12
//#define S4 13
//int sure = 150;
//
//void setup() {
//  pinMode(S1, INPUT_PULLUP);
//  pinMode(S2, INPUT_PULLUP);
//  pinMode(S3, INPUT_PULLUP);
//  pinMode(S4, INPUT_PULLUP);
//  Serial.println("lütfen enter a basın");
//  for (int i = 2; i < 10; i++) {
//    pinMode(i, OUTPUT);
//    digitalWrite(i, HIGH);
//  }
//}
//
//void loop() {
//  if (digitalRead(S1) == LOW) {
//    delay(sure);
//
//    // Ayarla(2,6,4);
//
//    while (digitalRead(S1) == LOW)
//    {
//      digitalWrite(2, LOW);
//      delay(sure);
//      digitalWrite(2, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S2) == LOW) {
//   delay(sure);
//
//     //Ayarla(2,6,4);
//
//    while (digitalRead(S2) == LOW)
//    {
//      digitalWrite(3, LOW);
//      delay(sure);
//      digitalWrite(3, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S3) == LOW)
//  {
//    delay(sure);
//
//     //Ayarla(2,6,4);
//
//    while (digitalRead(S3) == LOW)
//    {
//      digitalWrite(4, LOW);
//      delay(sure);
//      digitalWrite(4, HIGH);
//      delay(sure);
//    }
//  }
//
//  if (digitalRead(S4) == LOW) {
//    delay(sure);
//
//     //Ayarla(2,6,4);
//
//    while (digitalRead(S4) == LOW)
//    {
//      digitalWrite(5, LOW);
//      delay(sure);
//      digitalWrite(5, HIGH);
//      delay(sure);
//    }
//  }
//}



/////////////////

//#define LED_COUNT 4
//
//const int ledPins[LED_COUNT] = {2, 3, 4, 5};
//const int buttonEnterPin = 6;
//const int buttonNextPin = 7;
//const int buttonPrevPin = 8;
//
//int selectedLed = 0;
//
//void setup() {
//  for (int i = 0; i < LED_COUNT; i++) {
//    pinMode(ledPins[i], OUTPUT);
//  }
//  pinMode(buttonEnterPin, INPUT_PULLUP);
//  pinMode(buttonNextPin, INPUT_PULLUP);
//  pinMode(buttonPrevPin, INPUT_PULLUP);
//
//  Serial.begin(9600);
//}
//
//void loop() {
//  if (digitalRead(buttonEnterPin) == LOW) {
//    Serial.println("Enter'a basarak led seçin.");
//
//    while (digitalRead(buttonEnterPin) == LOW) {
//      // Bekle, Enter butonu bırakılana kadar
//    }
//
//    Serial.println("Seçilen led yanıp sönecek.");
//    digitalWrite(ledPins[selectedLed], HIGH);
//    delay(1000);
//    digitalWrite(ledPins[selectedLed], LOW);
//  }
//
//  if (digitalRead(buttonNextPin) == LOW) {
//    selectedLed = (selectedLed + 1) % LED_COUNT;
//    delay(500);
//  }
//
//  if (digitalRead(buttonPrevPin) == LOW) {
//    selectedLed = (selectedLed + LED_COUNT - 1) % LED_COUNT;
//    delay(500);
//  }
//}



//
//#define S1 10
//#define S2 11
//#define S3 12
//#define S4 13
//int sure = 150;
//
//void setup() {
//  for (int i = 2; i <= 5; i++) {
//    pinMode(i, OUTPUT);
//    digitalWrite(i, HIGH);
//  }
//  pinMode(S1, INPUT_PULLUP);
//  pinMode(S2, INPUT_PULLUP);
//  pinMode(S3, INPUT_PULLUP);
//  pinMode(S4, INPUT_PULLUP);
//  Serial.println("Lütfen Enter'a basın");
//}
//
//void loop() {
//  checkAndBlink(S1, 2);
//  checkAndBlink(S2, 3);
//  checkAndBlink(S3, 4);
//  checkAndBlink(S4, 5);
//}
//
//void checkAndBlink(int buttonPin, int ledPin) {
//  if (digitalRead(buttonPin) == LOW) {
//    delay(sure);
//    while (digitalRead(buttonPin) == LOW) {
//      digitalWrite(ledPin, LOW);
//      delay(sure);
//      digitalWrite(ledPin, HIGH);
//      delay(sure);
//    }
//  }
//}


//#define S1 10
//#define S2 11
//#define S3 12
//#define S4 13
//int sure = 150;
//int ledPins[] = {2, 3, 4, 5};
//int selectedLed = 0;
//
//void setup() {
//  for (int i = 2; i <= 5; i++) {
//    pinMode(i, OUTPUT);
//    digitalWrite(i, HIGH);
//  }
//  pinMode(S1, INPUT_PULLUP);
//  pinMode(S2, INPUT_PULLUP);
//  pinMode(S3, INPUT_PULLUP);
//  pinMode(S4, INPUT_PULLUP);
//  Serial.begin(9600);
//  Serial.println("Lütfen Enter'a basın");
//}
//
//void loop() {
//  if (digitalRead(S1) == LOW) {
//    selectLed();
//  } else if (digitalRead(S2) == LOW) {
//    selectedLed = (selectedLed + 1) % 4;
//    delay(sure);
//  } else if (digitalRead(S3) == LOW) {
//    selectedLed = (selectedLed + 3) % 4;
//    delay(sure);
//  }
//}
//
//void selectLed() {
//  Serial.println("Enter'a basarak led seçin.");
//  delay(sure);
//
//  while (digitalRead(S1) == LOW) {
//    digitalWrite(ledPins[selectedLed], LOW);
//    delay(sure);
//    digitalWrite(ledPins[selectedLed], HIGH);
//    delay(sure);
//  }
//}

/////////////////////////enter kullanarak ileri geri led seçme /////////////////////////////////
//
//#define geri 10
//#define ileri 11
//#define enter 12
//int led=2;
//int sure=300;
//boolean yan=LOW;
//
//
//
//void setup()
//{
//  Serial.begin(9600);
//  for(byte btn_pin=10;btn_pin<14;btn_pin++)//buton tanımlama
//  {
//    pinMode(btn_pin,INPUT);
//    
//  }
//  for(byte led_pin=2;led_pin<10;led_pin++)//led tanımlama
//  {
//    pinMode(led_pin,OUTPUT);
//    digitalWrite(led_pin,HIGH);
//  }
//  Serial.println("*********************************");
//  Serial.println("led seçmek için enter(s3)'a basın");
//  Serial.println("led seçerken ileri gitmek için ileriye(s2) basınız");
//  Serial.println("ed seçerken geri gitmek için geriye(s1) basınız");
//  Serial.println("*********************************");
//}
//
//void loop()
//{
//  if(digitalRead(enter)==LOW)
//  {
//    while(digitalRead(enter)==LOW){delay(300);}
//    Serial.println("bir led seç");
//
//    while(digitalRead(enter)==HIGH)
//    {
//      if(digitalRead(ileri)==LOW and led<9){digitalWrite(led,HIGH);led++;}
//      if(digitalRead(geri)==LOW and led>2){digitalWrite(led,HIGH);led--;}
//      digitalWrite(led,LOW);
//      delay(200);
//    }
//    Serial.print(led-1);
//    Serial.println("nolu led seçildi");
//  }
//  digitalWrite(led,yan);
//  delay(sure);
//  yan=!yan;
//}

////////////////////////////////
//char okunan;
//void setup()
//{
//  Serial.begin(9600);
//}
//void loop()
//{
//  if(Serial.available())
//  {
//    okunan = Serial.read();
//    Serial.print(okunan);
//    Serial.print("\t");
//    delay(1000);
//  }
//}
////////////////////////////////////////////////
//void setup() {
//  // put y  our setup code here, to run once:
//  for(int i=2;i<10;i++)
//  {
//    pinMode(i,OUTPUT);
//    digitalWrite(i,LOW);
//    delay(200);
//
//  }
//  Serial.begin(9600);
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  for(int i=2;i<10;i++)
//  {
//
//  if(i%=0)
//  {
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//  }  
//  else
//    {  
//      digitalWrite(i,HIGH);
//    }
//  }
//  
//}
//void setup(){
//    
//
//  for(int i=2;i<10;i++)
//    {
//  
//                                                                                                                                                                                                                                                                 
//      digitalWrite(i,LOW);
//      delay(200);
//      digitalWrite(i,HIGH);
//      delay(200);
//      
//        i++;
//    }
//}
//void loop() {
//  // put your main code here, to run repeatedly:
//  for(int i=2;i<10;i++)
//  {
//
//                                                                                                                                                                                                                                                               
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//    
//      i++;
//  }
//  for(int i=3;i<10;i++)
//  {
//
//                                                                                                                                                                                                                                                               
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//    
//      i++;
//  }
//  
//}
////////////////////1 3 5 yak sonra 2 4 6 yak////////////////////////


//void setup() {
//  // put y  our setup code here, to run once:
//  for(int i=2;i<10;i++)
//  {
//    pinMode(i,OUTPUT);
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//
//  }
//  Serial.begin(9600);
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  for(int i=2;i<10;i++)
//  {
//
//                                                                                                                                                                                                                                                               
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//    
//      i++;
//  }
//  for(int i=3;i<10;i++)
//  {
//
//                                                                                                                                                                                                                                                               
//    digitalWrite(i,LOW);
//    delay(200);
//    digitalWrite(i,HIGH);
//    delay(200);
//    
//      i++;
//  }
//  
//}

///////////////////kenarlardan ortaya doğru yak ve geri dön//////////
//
//int sure=200;
//
//void setup() {
//  //Ledlerle dalga etkisi yapan uygulama
//
//  for(int i=2; i<10; i++)
//  {
//    pinMode(i, OUTPUT);
//    digitalWrite(i, LOW);
//    delay(sure);
//    digitalWrite(i, HIGH);
//  }
//
//}
//
//void loop() {
//  int k=9;
//  for(int i=2; i<10; i++)
//  {
//    digitalWrite(i, LOW);
//    digitalWrite(k, LOW);
//    delay(sure);
//    digitalWrite(i, HIGH);
//    digitalWrite(k, HIGH);
//
//    k--;
//  }
//
//}





////////////////////////İKİNCİ YARIYIL NOTLARI //////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////ptogram 1 ve porgram 2
//#include <LiquidCrystal.h> //KÜTÜPHANE DOSYASI EKLENDİ
////
//LiquidCrystal lcd(8,9,4,5,6,7); //RS, En, D4, D5, D6, D7  Sıralaması önemli****
//
//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop() 
//{
//  lcd.setCursor(0,0); // KURSOR 0. SATIR 0. KARAKTERE KONUMLANIYOR
//  lcd.print("Hello"); // KARAKTERLER YAZILIYOR
//  lcd.setCursor(0,1); // KURSOR1. SATIR 0. KARAKTERE KONUMLANIYOR
//  lcd.print("world"); // KARAKTER YAZILIYOR
//
////////////program 2 de eklenen kısım 
//
//  //EKRANI KAPAT:
//  lcd.noDisplay();
//  delay(500);
//
//  //EKRANI AÇ:
//  lcd.display();
//  delay(500);
//
//}

////////////////////////program 3 clear 

//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop() 
//{
//  lcd.setCursor(0,0); // KURSOR 0. SATIR 0. KARAKTERE KONUMLANIYOR
//  lcd.print("Hello"); // KARAKTERLER YAZILIYOR
//  lcd.setCursor(0,1); // KURSOR1. SATIR 0. KARAKTERE KONUMLANIYOR
//  lcd.print("world"); // KARAKTER YAZILIYOR
// 
//  delay(1000);
//  lcd.clear();//ekranı temizle
//  delay(1000);
//  lcd.setCursor(4,0); // KURSOR 0. SATIR 4. KARAKTERE KONUMLANIYOR
//  lcd.print("Akcakoca"); // KARAKTERLER YAZILIYOR
//  lcd.setCursor(6,1); // KURSOR1. SATIR 6. KARAKTERE KONUMLANIYOR
//  lcd.print(" M.Y.O"); // KARAKTER YAZILIYOR
//  delay(1000);
//  lcd.clear();//ekranı temizle
//}



///////////////////////Cursoru gizleme

//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop()
//{
//  lcd.setCursor(4,0); // KURSOR 0. SATIR 4. KARAKTERE KONUMLANIYOR
//  lcd.print("Akcakoca"); // KARAKTERLER YAZILIYOR
//  lcd.setCursor(6,1); // KURSOR1. SATIR 6. KARAKTERE KONUMLANIYOR
//  lcd.print(" M.Y.O"); // KARAKTER YAZILIYOR
//  lcd.cursor();//cursoru gösterir
//  delay(3000);
//  lcd.noCursor();//cursoru gizler
//  delay(3000);
//  lcd.blink();//kursoru yakıp söndürür 
//  delay(3000);
//  lcd.noBlink();//kursoru sabit yapar
//  delay(3000);
//}

//////////////////Kaydırma komutu

//lcd.scrollDisplayRight();//KARAKTERLERİ RİGHT YÖNÜNDE KAYDIRIR
//
//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop()
//{
//  for(int i=0;i<16;i++)
//  {
//    lcd.setCursor(0,0); // KURSOR 0. SATIR 4. KARAKTERE KONUMLANIYOR
//    lcd.print("*****Omer*****"); // KARAKTERLER YAZILIYOR
//    lcd.setCursor(0,1); // KURSOR1. SATIR 6. KARAKTERE KONUMLANIYOR
//    lcd.print("*****Kocer*****"); // KARAKTER YAZILIYOR
//    lcd.scrollDisplayLeft();//KARAKTERLERİ LEFT YÖNÜNDE KAYDIRIR
//    delay(200);
//  }
//  //delay(3000);
//}
//lcd.clear();


///////////////////////Clear ekleme


//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop()
//{
//  for(int i=0;i<16;i++)
//  {
//    lcd.setCursor(0,0); // KURSOR 0. SATIR 4. KARAKTERE KONUMLANIYOR
//    lcd.print("*****Omer*****"); // KARAKTERLER YAZILIYOR
//    lcd.setCursor(0,1); // KURSOR1. SATIR 6. KARAKTERE KONUMLANIYOR
//    lcd.print("*****Kocer*****"); // KARAKTER YAZILIYOR
//    lcd.scrollDisplayLeft();//KARAKTERLERİ LEFT YÖNÜNDE KAYDIRIR
//    delay(200);
//  }
//  lcd.clear();
//  delay(500);
//  for(int i=0;i<16;i++)
//  {
//    lcd.setCursor(0,0); // KURSOR 0. SATIR 4. KARAKTERE KONUMLANIYOR
//    lcd.print("AKCAKOCA MESLEK YUKSEK OKULU"); // KARAKTERLER YAZILIYOR
//    lcd.setCursor(6,1); // KURSOR1. SATIR 6. KARAKTERE KONUMLANIYOR
//    lcd.print("BILGISAYAR PROGRAMCILIGI"); // KARAKTER YAZILIYOR
//    lcd.scrollDisplayRight();//KARAKTERLERİ LEFT YÖNÜNDE KAYDIRIR
//    delay(200);
//  }
//}


///////////////////////////
//
//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//
//pinMode(10,OUTPUT);
//}
//
//void loop() 
//{
//  
//  digitalWrite(10,HIGH);
//  lcd.setCursor(0,0);
//  lcd.print("Omer");
//  delay(2000);
//  digitalWrite(10,LOW);
//  delay(2000);
//}


///////////////////////////7Lcd ye 1 den 12 ye kadar yazdırıp somra 20 den 1 e kadar geri yazdıran kod//////////////


//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop()
//{
//  for(int i=0;i<21;i++)
//  {
//    lcd.setCursor(0,0);
//    lcd.print(i);
//    lcd.print(" ");//boşluk bırakınca yazdığının yanındakini siler 
//    delay(300);
//     //lcd.clear();
//  }
//  for(int j=19;j>0;j--)
//  {
//  lcd.setCursor(0,0);
//  lcd.print(j);
//  lcd.print(" ");//boşluk bırakınca yazdığının yanındakini siler 
//  delay(300);
//  
//   //lcd.clear();
//  } 
//}


///////////////////////////////yukarıdaki kodun tek for ile olan hali/////////////////

//boolean flag=true;
//void setup() 
//{
//lcd.begin(16,2); //LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
//}
//
//void loop()
//{
//  for(int i=0;i<21;i++)
//  {
//    if(flag)
//    {
//      lcd.setCursor(0,0);
//      lcd.print(i);
//      lcd.print(" ");//boşluk bırakınca yazdığının yanındakini siler 
//      delay(300);
//     //lcd.clear();
//    }
//    else
//    {
//      lcd.setCursor(0,0);
//      lcd.print(20-i);
//      lcd.print(" ");//boşluk bırakınca yazdığının yanındakini siler 
//      delay(300);
//    }
//  }
//  flag=!flag;
//}
//


////////////////////// serial monitor ile komut verip lcd ye yazdırma//////////

//int i=0;
//char karakter[16];
//void setup()
//{
//  Serial.begin(9600);
//  lcd.begin(16,2);
//  lcd.setCursor(0,0);
//}
//
//void loop()
//{
//  if (i<14)
//  {
//    if(Serial.available()>0)
//    {
//      karakter[i]=Serial.read();
//      lcd.setCursor(i,0);
//      lcd.print(karakter[i]);
//      i++;
//    }
//    /*
//    if (i==14)
//    {
//      lcd.clear();
//      i=0;
//    }
//    */
//    if (karakter[i-1]=='@')
//    {
//      delay(1000);
//      lcd.clear();
//      i=0;
//    }
//  }
//}


//////////////////////////////////////////Tuşların kullanımına başlandı///////

#include <LiquidCrystal.h> //KÜTÜPHANE DOSYASI EKLENDİ
//
LiquidCrystal lcd(8,9,4,5,6,7); //RS, En, D4, D5, D6, D7  Sıralaması önemli****

//int okunan =0;
//int deger =0;

//#define sag 0
//#define ust 1
//#define alt 2
//#define sol 3
//#define secim 4
//#define yok 5
//
//int tus_oku()
//{
//  okunan=analogRead(0);
//  if (okunan > 1000) return yok;
//  if (okunan < 50)   return sag;
//  if (okunan < 195)  return ust;
//  if (okunan < 380)  return alt;
//  if (okunan < 555)  return sol;
//  if (okunan < 790)  return secim;
//  return yok;
//}
//
//void setup()
//{
//  lcd.begin(16,2);
//}
//
//
//void loop()
//{
//  deger=tus_oku();//fonksiyondan gelen veriyi degerin içine attık
//  //lcd.setCursor(0,0);//sadece basılmadığında 5 yazması için 
//  //lcd.print(deger);
//  switch (deger) 
//  {
//  case 0:
//    lcd.setCursor(0,0);
//    lcd.print("sag");
//    break;
//  case 1:
//    lcd.setCursor(0,0);
//    lcd.print("ust");
//    break;
//  case 2:
//    lcd.setCursor(0,0);
//    lcd.print("alt");
//    break;
//  case 3:
//    lcd.setCursor(0,0);
//    lcd.print("sol");
//    break;
//  case 4:
//    lcd.setCursor(0,0);
//    lcd.print("secim");
//    break;
////  case 5:
////    lcd.setCursor(0,0);
////    lcd.print("yok");
////    break;
//  default:
//    // statements
//    break;
//  }
//}
//
//

//TEKLİ SKOR YAZDIRMA********************************************

// int okunan=0;
// int deger=0;
// int skor=0;
// int tus=0;


// //Her bir tuş için geri dödürülecek sasyısal sabitler taımlanıyor.
// #define sag 0
// #define ust 1
// #define alt 2
// #define sol 3
// #define secim 4
// #define yok 5

// int tus_oku()
// {
//   okunan=analogRead(0);
//   if(okunan>1000) return yok;
//   if(okunan<50) return sag;
//   if(okunan<195) return ust;
//   if(okunan<380) return alt;
//   if(okunan<555) return sol;
//   if(okunan<790) return secim;
//   return yok;
// }

// void setup() {
//   lcd.begin(16,2);  //LCD Kütüphanesi 2 satır 16 karakter olarak başlatılıyor
// }

// void loop() 
// {
  
//   lcd.setCursor(0,0);
//   lcd.print("A-SKOR =");
//   lcd.print(skor);
//   lcd.print(" ");
  
//   tus=tus_oku ();
 
//   if(tus==ust)
//   {
//     skor++;
//     delay(500);
//     while(tus_oku() !=yok){}
//   }

//   if(tus==alt and skor>0)
//   {
//     skor--;
//     delay(500);
//     while(tus_oku() !=yok){}

//   }
  
  
// }


//SKORBOARD YAPMA ÇİFT TAKIM********************************************

// int okunan=0;
// int deger=0;
// int askor=0;
// int bskor =0;
// int tus=0;


// //Her bir tuş için geri dödürülecek sasyısal sabitler taımlanıyor.
// #define sag 0
// #define ust 1
// #define alt 2
// #define sol 3
// #define secim 4
// #define yok 5

// int tus_oku()
// {
//   okunan=analogRead(0);
//   if(okunan>1000) return yok;
//   if(okunan<50) return sag;
//   if(okunan<195) return ust;
//   if(okunan<380) return alt;
//   if(okunan<555) return sol;
//   if(okunan<790) return secim;
//   return yok;
// }

// void setup() {
//   lcd.begin(16,2);  //LCD Kütüphanesi 2 satır 16 karakter olarak başlatılıyor
// }

// void loop() 
// {
  
//   lcd.setCursor(0,0);
//   lcd.print("A-SKOR =");
//   lcd.print(askor);
//   lcd.print(" ");
//   lcd.setCursor(0,1);
//   lcd.print("B-SKOR =");
//   lcd.print(bskor);
//   lcd.print(" ");

//   tus=tus_oku ();
 
//   if(tus==ust)
//   {
//     askor++;
//     delay(500);
//     while(tus_oku() !=yok){}
//   }

//   if(tus==alt and askor>0)
//   {
//     askor--;
//     delay(500);
//     while(tus_oku() !=yok){}

//   }
//   if(tus==sag)
//   {
//     bskor++;
//     delay(500);
//     while(tus_oku() !=yok){}
//   }

//   if(tus==sol and bskor>0) 
//   {
//     bskor--;
//     delay(500);
//     while(tus_oku() !=yok){}
//   }
// }


//****************************************************************************



//////////SKORBOARD DA SÜRE KISMI DA OLACAK //////////////////////////
// int okunan=0;
// int deger=0;
// int askor=0;
// int bskor =0;
// int tus=0;
// int saniye=0;
// int dakika=0;
//
//
// //Her bir tuş için geri dödürülecek sasyısal sabitler taımlanıyor.
// #define sag 0
// #define ust 1
// #define alt 2
// #define sol 3
// #define secim 4
// #define yok 5
//
// int tus_oku()
// {
//   okunan=analogRead(0);
//   if(okunan>1000) return yok;
//   if(okunan<50) return sag;
//   if(okunan<195) return ust;
//   if(okunan<380) return alt;
//   if(okunan<555) return sol;
//   if(okunan<790) return secim;
//   return yok;
// }
//
// void setup() {
//   lcd.begin(16,2);
// }
//
// void loop() 
// {
//   lcd.setCursor(10,0);
//   lcd.print("SURE");
//    if(dakika>9)
//   {
//    lcd.setCursor(9,1);
//    lcd.print(dakika);
//   }
//   else
//   {
//    lcd.setCursor(9,1);
//    lcd.print("0");
//    lcd.print(dakika);
//   };
//   if(saniye%2==0)
//   {
//    lcd.setCursor(11,1);
//    lcd.print(":");
//   }
//   else
//   {
//    lcd.setCursor(11,1);
//    lcd.print(" ");
//   }
//   if(saniye>9)
//   {
//    lcd.setCursor(12,1);
//    lcd.print(saniye);
//   }
//   else
//   {
//    lcd.setCursor(12,1);
//    lcd.print("0");
//    lcd.print(saniye);
//   }
//   saniye++;
//   delay(990);
//   if(saniye==60)
//   {
//    saniye=0;
//    dakika++;
//   }
//   lcd.setCursor(0,0);
//   lcd.print("A-S =");
//   lcd.print(askor);
//   lcd.print(" ");
//   lcd.setCursor(0,1);
//   lcd.print("B-S =");
//   lcd.print(bskor);
//   lcd.print(" ");
//  
//   tus=tus_oku ();
// 
//   if(tus==ust)
//   {
//     askor++;
//     delay(500);
//     //while(tus_oku() !=yok){}
//   }
//
//   if(tus==alt and askor>0)
//   {
//     askor--;
//     delay(500);
//     //while(tus_oku() !=yok){}
//
//   }
//   if(tus==sag)
//   {
//     bskor++;
//     delay(500);
//     //while(tus_oku() !=yok){}
//   }
//
//   if(tus==sol and bskor>0) 
//   {
//     bskor--;
//     delay(500);
//     //while(tus_oku() !=yok){}
//   }
// }


//////Milis fonksiyonunu kullanmak///////////////////////////////////
//
//long sure=0;
//
// void setup() {
//   lcd.begin(16,2);
// }
//
// void loop() 
// {
//    sure=millis()/1000;
//    lcd.setCursor(0,0);
//    lcd.print(sure);
// }
