#include "../include/thumper.h"

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  analogWrite(ENA, POT_RIGHT);
  digitalWrite(IN1, DIR_RIGHT & 0x01);
  digitalWrite(IN2, DIR_RIGHT & 0x02);

  analogWrite(ENB, POT_LEFT);
  digitalWrite(IN3, DIR_LEFT & 0x02);
  digitalWrite(IN4, DIR_LEFT & 0x01);

  digitalWrite(LED, LED_ON * 255);
}