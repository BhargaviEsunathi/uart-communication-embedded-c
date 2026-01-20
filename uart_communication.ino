// UART Communication using Arduino

void setup() {
  Serial.begin(9600);   // Initialize UART
}

void loop() {
  Serial.println("UART Communication Test");
  delay(1000);
}