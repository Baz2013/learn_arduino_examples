
/**
 * 按键控制LED灯的亮灭
 */

 #define LED 13
 #define KEY 2

 int KEY_NUM = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(KEY,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  scan_key();
  if(KEY_NUM == 1){
    digitalWrite(LED,!digitalRead(LED));
  }
}

void scan_key(){
  KEY_NUM = 0;
  if(digitalRead(KEY) == LOW)
  {
    delay(20);
    if(digitalRead(KEY) == LOW)
    {
      KEY_NUM = 1;
      while(digitalRead(KEY) == LOW);
    }
  }
}

