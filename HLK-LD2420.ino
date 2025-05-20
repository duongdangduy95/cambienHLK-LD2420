const int OT1_PIN = 5;  
const int OT2_PIN = 6;  
const int LED_PIN = 13;

void setup() {
  pinMode(OT1_PIN, INPUT);
  pinMode(OT2_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Bắt đầu theo dõi cảm biến HLK-LD2420...");
}

void loop() {
  int micromotion = digitalRead(OT1_PIN); 
  int motion = digitalRead(OT2_PIN);      

  if (motion == HIGH) {
    Serial.println("🔴 Có người đang DI CHUYỂN");
  } else if (micromotion == HIGH) {
    Serial.println("🟡 Có người đang ĐỨNG YÊN");
  } else {
    Serial.println("✅ Không có ai trong vùng quét");
  }
  
  if (micromotion == HIGH || motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(300);
}
