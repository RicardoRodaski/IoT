📘 PulseCare – Sistema IoT de Detecção de Quedas

Este repositório contém toda a documentação, código-fonte, diagramas e arquivos referentes ao projeto PulseCare, desenvolvido como Trabalho Final da disciplina Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie.

O objetivo do projeto é detectar quedas utilizando um ESP32, um sensor MPU-6050 e comunicação via MQTT, enviando alertas em tempo real para um dashboard no Node-RED e acionando um buzzer localmente.

🧩 Funcionalidades

Leitura contínua de aceleração e giroscópio

Detecção automática de queda

Alerta sonoro via buzzer

Envio de mensagem MQTT

Exibição de alerta no Node-RED

Simulação completa via Wokwi

🛠 Hardware Utilizado

ESP32 DevKit V1

Sensor MPU-6050

Buzzer ativo

Conexões I2C (SDA / SCL)

Alimentação 3.3V

Simulação no Wokwi

📌 Diagramas completos estão na pasta /hardware.

💻 Software e Firmware

Arduino/ESP32 (sketch.ino)

Biblioteca Adafruit MPU6050

Adafruit Unified Sensor

Protocolo MQTT

Node-RED (dashboard e alerts)

O código completo está na pasta /codigo.

🌐 Comunicação MQTT

Broker: Mosquitto ou Node-RED (MQTT-in / MQTT-out)

Tópico publicado:

pulsecare/queda


Payload:

{ "evento": "queda", "timestamp": "2025-..." }

📊 Resultados

Tabela de medições do tempo de resposta

Gráficos de desempenho

Prints da simulação

Vídeo demonstrativo no YouTube (não listado)**
Link será inserido pelo autor

Arquivos disponíveis na pasta /documentacao.

🔗 Link do Projeto no Wokwi

https://wokwi.com/projects/446071901866050561

📝 Artigo acadêmico

A versão final do artigo (PDF) está disponível em /documentacao/artigo-final.pdf.

👤 Autor

Ricardo Rodaski Martino
Universidade Presbiteriana Mackenzie
Curso: Análise e Desenvolvimento de Sistemas
Disciplina: Objetos Inteligentes Conectados
Ano: 2025

📄 Licença

Este projeto é disponibilizado sob a licença MIT. Utilize, modifique e distribua livremente.
