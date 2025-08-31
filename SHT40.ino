#include <Wire.h>              // Librería para comunicación I2C
#include "Adafruit_SHT4x.h"    // Librería oficial de Adafruit para SHT4x

// Se crea el objeto sensor
Adafruit_SHT4x sht4 = Adafruit_SHT4x();

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);  // Esperar a que el monitor serial inicie

  Serial.println("Iniciando SHT40...");

  if (!sht4.begin()) {  // Verifica si el sensor responde en el bus I2C
    Serial.println("No se encontró el SHT40, revisa las conexiones.");
    while (1) delay(1);
  }

  // Configuración de precisión (hay varias opciones: alta, media, baja)
  sht4.setPrecision(SHT4X_HIGH_PRECISION);
  // Configuración de modo heater (se deja apagado normalmente)
  sht4.setHeater(SHT4X_NO_HEATER);

  Serial.println("Sensor SHT40 listo para lectura.");
}

void loop() {
  sensors_event_t humidity, temp;  

  // Se solicitan los datos de medición
  sht4.getEvent(&humidity, &temp);

  // Mostrar en monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temp.temperature);
  Serial.println(" °C");

  Serial.print("Humedad: ");
  Serial.print(humidity.relative_humidity);
  Serial.println(" %");

  Serial.println("--------------------");

  delay(2000); // Lectura cada 2 segundos
}
