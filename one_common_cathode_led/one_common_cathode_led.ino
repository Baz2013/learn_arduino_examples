/**
 * 使用一位共阴数码管显示数字
 */

 #define SEG_a 2
 #define SEG_b 3
 #define SEG_c 4
 #define SEG_d 5
 #define SEG_e 6
 #define SEG_f 7
 #define SEG_g 8
 #define SEG_h 9

unsigned char table[10][8] = {
  {0, 0, 1, 1, 1, 1, 1, 1}, //0
  {0, 0, 0, 0, 0, 1, 1, 0}, //1
  {0, 1, 0, 1, 1, 0, 1, 1}, //2
  {0, 1, 0, 0, 1, 1, 1, 1}, //3
  {0, 1, 1, 0, 0, 1, 1, 0}, //4
  {0, 1, 1, 0, 1, 1, 0, 1}, //5
  {0, 1, 1, 1, 1, 1, 0, 1}, //6
  {0, 0, 0, 0, 0, 1, 1, 1}, //7
  {0, 1, 1, 1, 1, 1, 1, 1}, //8
  {0, 1, 1, 0, 1, 1, 1, 1}  //9
};

void setup() {
  // put your setup code here, to run once:
  pinMode(SEG_a, OUTPUT);
  pinMode(SEG_b, OUTPUT);
  pinMode(SEG_c, OUTPUT);
  pinMode(SEG_d, OUTPUT);
  pinMode(SEG_e, OUTPUT);
  pinMode(SEG_f, OUTPUT);
  pinMode(SEG_g, OUTPUT);
  pinMode(SEG_h, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i = 0;
  for ( ; i < 10; i++){
    digitalWrite(SEG_a, table[i][7]);
    digitalWrite(SEG_b, table[i][6]);
    digitalWrite(SEG_c, table[i][5]);
    digitalWrite(SEG_d, table[i][4]);
    digitalWrite(SEG_e, table[i][3]);
    digitalWrite(SEG_f, table[i][2]);
    digitalWrite(SEG_g, table[i][1]);
    digitalWrite(SEG_h, table[i][0]);
    delay(1000);
  }
  
}
