/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

   让内置到板子上的LED闪动

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
// 该函数每次只执行一次，用来设置环境
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(接口名称,OUTPUT或者INPUT),将接口定义为输入或输出接口，用在setup函数里
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
