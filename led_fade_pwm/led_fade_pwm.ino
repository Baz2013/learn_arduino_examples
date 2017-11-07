
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
int analog_val = 0;
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
  analog_val = map(val, 0, 5000, 0, 255);
  analogWrite(LED, analog_val);
  delayMicroseconds(cycle - val);

  Serial.print("analog_val = ");
  Serial.println(analog_val);
}

