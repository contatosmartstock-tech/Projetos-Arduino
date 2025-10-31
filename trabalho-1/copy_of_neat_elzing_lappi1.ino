int leds[] = {3, 4, 5, 6, 7}; // Pinos dos LEDs
int numLeds = 5;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT); // Define cada pino como saída
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH); // Acende LED
    delay(3000);                 // Espera 3 segundos
    digitalWrite(leds[i], LOW);  // Apaga LED
  }
}
