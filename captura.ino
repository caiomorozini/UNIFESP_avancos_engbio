// Definindo pino do ecg em A0
const int ECG_PIN = A0;

// Declarando variavel para armazenar ECG
int ecgData = 0;


void setup() {
  // Configurando baud rate para comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Lendo sinal de ecg
  ecgData = analogRead(ECG_PIN);

  // Printando saída no monitor serial
  Serial.println(ecgData);

}
