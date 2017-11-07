
/**
 * 步进电机
 */

 
#define A1 6
#define B1 5
#define C1 4
#define D1 3


void setup() {
  // put your setup code here, to run once:
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Phase_A();
  delay(5);
  Phase_B();
  delay(5);
  Phase_C();
  delay(5);
  Phase_D();
  delay(5);
}



void Phase_A(){
  digitalWrite(A1, HIGH);  // A1 引脚高电平
  digitalWrite(B1, LOW);
  digitalWrite(C1, LOW);
  digitalWrite(D1, LOW);
}
void Phase_B(){
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, LOW);
}

void Phase_C(){
  digitalWrite(A1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
}

void Phase_D(){
  digitalWrite(A1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
}
