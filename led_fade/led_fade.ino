
/**
 * LED 呼吸灯效果，数字IO实现
 */

 #define LED 3
 #define LED_OFF HIGH
 #define LED_ON LOW
int step = 10;
int val = 0;
int flag = 0;
int cycle = 5000; // 一个周期 us

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(val == 0 and flag == 1){
    flag = 0;
    step = -step;
  }
  if(val == cycle and flag == 0)
  {
    step = -step;
    flag = 1;
  }
  
  val = val + step;
  fade(val);

//  Serial.print("val = ");
//  Serial.println(val);
}


void fade(int value){
  digitalWrite(LED, LED_ON);
  delayMicroseconds(value);
  digitalWrite(LED, LED_OFF);
  delayMicroseconds(cycle - value);
}

