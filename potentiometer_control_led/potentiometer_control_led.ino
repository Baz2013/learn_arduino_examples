
#define POT A0
#define LED 3

int potBuffer = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potBuffer = analogRead(POT);
  potBuffer = map(potBuffer, 0,1023,0, 255);
  Serial.print("led:");
  Serial.println(potBuffer);
  analogWrite(LED,potBuffer);
}
