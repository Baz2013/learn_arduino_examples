/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

   让内置到板子上的LED闪动

  控制外接LED亮灭

  http://www.arduino.cc/en/Tutorial/Blink
*/

/**
 * 面包板上中间两排，横着的孔是不通的，竖着的是通的
 * 面包板上上下边上的两排，横着的孔是通的，竖着的是不通的
 * 
 * 板子I/O口灌电流的能力是大于它拉电流的能力,所以建议使用负极控制的逻辑（led的负极接I/O口)
 * LED 负极接I/O口的时候，LED给低电平才能点亮
 * 相反的，LED 负极接GND，正及接I/O口（阴极接法),LED给高电平量（拉电流),不推荐这种接法
 */

#define OUT_LED 2

// the setup function runs once when you press reset or power the board
// 该函数每次只执行一次，用来设置环境
void setup() {
  
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(接口名称,OUTPUT或者INPUT),将接口定义为输入或输出接口，用在setup函数里
  pinMode(OUT_LED, OUTPUT);
  Serial.begin(9600);//设置波特率为9600
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(OUT_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  Serial.println("set low voltage");
  digitalWrite(OUT_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);                       // wait for a second
}
