#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    Serial.println("Hello World!");
  }
  
    int count = 0;
    bool toggle = 0;
    digitalWrite(PIN_LED, toggle);
    delay(1000);
    
    while (count<10) {
      toggle = !toggle;
      digitalWrite(PIN_LED, toggle);
      Serial.println(++count);
      delay(100);
    }

    while (1) {
      digitalWrite(PIN_LED, 1);
    }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
