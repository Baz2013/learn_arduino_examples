#define ADpin A5
#define LED 13

int ADBuffer = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   ADBuffer = analogRead(ADpin);
   Serial.print("AD=");
   Serial.println(ADBuffer);
   if ( ADBuffer > 600){
    digitalWrite(LED, HIGH);
   }else{
    digitalWrite(LED, LOW);
   }
}
