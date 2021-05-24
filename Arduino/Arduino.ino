const int trig = 8; //引脚
const int echo = 11;

int distance; //返回数值

void setup()
{
  Serial.begin(9600); //串口调试

  pinMode(trig, OUTPUT); //针脚输出
  pinMode(echo, INPUT);  //针脚输入
}

void loop()
{
  //向引脚发送10us的高电平
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  //测算距离
  distance = (pulseIn(echo, HIGH) / 58.00);

  //串口打印
  Serial.print(distance);
  Serial.println();

  delay(1000);
}
