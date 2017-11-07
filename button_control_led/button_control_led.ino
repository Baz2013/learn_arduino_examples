
/**
 * 按键控制LED灯的亮灭
 */

 #define LED LED_BUILTIN //13
 #define KEY 2

 int KEY_NUM = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  /**在使用pinMode(INPUT_PULLUP)时不需要外接上拉或下拉电阻。
   * 开发板内置一个20K欧姆电阻，该电阻将引脚上拉到5V。
   * 开关在打开时，引脚读取到高电平。开关闭合后，引脚读取到低电平。
    */
  //pinMode(KEY,INPUT_PULLUP); //INPUT_PULLUP 内部上拉
  pinMode(KEY,INPUT); //
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  scan_key();
  if(KEY_NUM == 1){
    Serial.println("key num equal 1");
    digitalWrite(LED,!digitalRead(LED)); //LED状态翻转
  }
}

/**
 * 按键去抖动
 */
void scan_key(){
  KEY_NUM = 0;
  if(digitalRead(KEY) == LOW)
  {
    Serial.println("digital read lis low");
    delay(20);
    if(digitalRead(KEY) == LOW)
    {
      Serial.println("set key_num = 1");
      KEY_NUM = 1;
      while(digitalRead(KEY) == LOW); //等待松开按键(松手检测), 该语句等价于    while(digitalRead(KEY) == LOW){  ;    }
    }
  }
}

