#define Pot A0
#define Buzzer 2

int PotBuffer = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   PotBuffer = analogRead(Pot);
   Serial.print("PotBuffer value:");
   Serial.println(PotBuffer);
 for(int i = 0; i < 1000; i++){
   digitalWrite(Buzzer,LOW);
   delayMicroseconds(PotBuffer);
   digitalWrite(Buzzer,HIGH);
   delayMicroseconds(100);
 }

   delay(1000);
}
