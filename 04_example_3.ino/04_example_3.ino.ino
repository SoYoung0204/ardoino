#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial) {
    Serial.println("Hello World!");
    count = toggle = 0;
    digitalWrite(PIN_LED, toggle);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle = toggle_state(toggle); //toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); // wait for 1,000 milliseconds
  
}

int toggle_state(int toggle) {
  return !toggle;
}

//L 표시의 LED 등이 1초간격으로 꺼졌다 켜져야 함.
