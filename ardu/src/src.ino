#define ENA 11
#define IN1 10  
#define IN2 9

#define ENB 3
#define IN3 6
#define IN4 5

#define LED 13

// 1 - led on
// 2 - led off
#define LED_ON 1

// left potency
#define POT_LEFT 255

// left direction -- in 3/4
#define DIR_LEFT 1

// right potency (0-255)
#define POT_RIGHT 255

// right direction
// 0 - 00  --> desabilita os 2x INs        -- break
// 1 - 01  --> habilita 1x dos INs         -- forward
// 2 - 10  --> habilita 1x dos INs         -- backwards
// 3 - 11  --> habilita ambos INs          -- 
#define DIR_RIGHT 1

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