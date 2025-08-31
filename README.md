# Sensor SHT40 - ESP32

Este repositorio contiene programas de ejemplo para la lectura de **temperatura y humedad relativa** utilizando el sensor **SHT40-AD1B-R2** en conjunto con un **ESP32**, programado desde el **Arduino IDE**.

El sistema permite adquirir datos ambientales en tiempo real, con posibilidad de extenderse a aplicaciones de **IoT, domótica, control ambiental y monitoreo remoto**.

## Archivos incluidos

- **SHT40-test.ino**  
  Código base de prueba que inicializa el sensor y muestra lecturas de temperatura (°C) y humedad relativa (%) en el monitor serial cada 2 segundos.

- *(Futuros archivos podrán incluir integración con WiFi/MQTT para enviar datos a la nube).*

## Requisitos

- **Arduino IDE**  
- Librerías:  
  - `Adafruit_SHT4x`  
  - `Adafruit_Sensor`  

## Conexiones

El sensor SHT40 utiliza comunicación **I2C**. En el ESP32, las conexiones recomendadas son:

- **SDA → GPIO21**  
- **SCL → GPIO22**  
- **VCC → 3.3V**  
- **GND → GND**

> ⚠️ Importante: el SHT40 debe alimentarse con **3.3V** para evitar daños.

## Aplicación

Este sistema puede utilizarse en proyectos donde se requiera conocer las condiciones ambientales, como:

- Estaciones meteorológicas personales  
- Sistemas de automatización del hogar  
- Monitoreo de invernaderos o laboratorios  
- Aplicaciones IoT con envío de datos a la nube  

---

© Diego Barajas, 2025
