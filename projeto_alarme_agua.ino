
const int buzzer = 8;       // Buzzer conectado ao pino 8
const int sensorAgua = A0;  // Sensor conectado à entrada A0
const int limite = 500;     // Limite para disparar o alarme

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(sensorAgua);

  Serial.println(leitura);

  if (leitura > limite) {
    tone(buzzer, 2000);  // Emite som de 2000 Hz
    delay(2000);

    noTone(buzzer);
    delay(2000);
  } else {
    noTone(buzzer);      // Desliga o som
  }

  delay(200);
}

