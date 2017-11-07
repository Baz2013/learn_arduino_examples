
/**
 * LED 七彩跳变
 */

 #define LED_R 4
 #define LED_G 3
 #define LED_B 2
 
 #define LED_OFF LOW
 #define LED_ON HIGH
 
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R,OUTPUT);
  pinMode(LED_G,OUTPUT);
  pinMode(LED_B,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_R, LED_ON);
  digitalWrite(LED_G, LED_OFF);
  digitalWrite(LED_B, LED_OFF);
  delay(1000);

  Serial.println("will turn green");
  digitalWrite(LED_R, LED_OFF);
  digitalWrite(LED_G, LED_ON);
  digitalWrite(LED_B, LED_OFF);
  delay(1000);

   Serial.println("will turn blue");
  digitalWrite(LED_R, LED_OFF);
  digitalWrite(LED_G, LED_OFF);
  digitalWrite(LED_B, LED_ON);
  delay(1000);

  // yellow
  digitalWrite(LED_R, LED_ON);
  digitalWrite(LED_G, LED_ON);
  digitalWrite(LED_B, LED_OFF);
  delay(1000);

   //青
  digitalWrite(LED_R, LED_OFF);
  digitalWrite(LED_G, LED_ON);
  digitalWrite(LED_B, LED_ON);
  delay(1000);

  //紫
  digitalWrite(LED_R, LED_ON);
  digitalWrite(LED_G, LED_OFF);
  digitalWrite(LED_B, LED_ON);
  delay(1000);

    
  digitalWrite(LED_R, LED_ON);
  digitalWrite(LED_G, LED_ON);
  digitalWrite(LED_B, LED_ON);
  delay(1000);

//  Serial.print("val = ");
//  Serial.println(val);
}


