#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <WiFi.h>
#include <math.h>

Adafruit_MPU6050 mpu;
const int buzzerPin = 18;

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando...");

  // Conecta no WiFi do Wokwi
  WiFi.begin("Wokwi-GUEST", "");
  Serial.print("Conectando ao WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi conectado!");

  // Inicializa I2C e MPU6050
  Wire.begin();
  if (!mpu.begin()) {
    Serial.println("Falha ao inicializar o MPU6050!");
    while (1) {
      delay(10);
    }
  }
  Serial.println("MPU6050 inicializado.");

  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  Serial.println("Sistema iniciado com sucesso!");
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  float magnitude = sqrt(
    a.acceleration.x * a.acceleration.x +
    a.acceleration.y * a.acceleration.y +
    a.acceleration.z * a.acceleration.z
  );

  Serial.print("Magnitude: ");
  Serial.println(magnitude);

  if (magnitude > 9.5) { // limiar menor para teste
    Serial.println("ALERTA: Queda detectada!");
    digitalWrite(buzzerPin, HIGH);
    delay(1000);
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(300);
}
