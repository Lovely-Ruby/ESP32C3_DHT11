#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>

const int dataPin = 1;        // dht11的data引脚
DHT dhtClass(dataPin, DHT11); // 初始化类
void setup()
{
  Serial.begin(9600);
  dhtClass.begin(DHT11);
}

void loop()
{
  // 读取温度值
  float dhtTemperature = dhtClass.readTemperature();
  // 读取湿度值
  float dhtHumidity = dhtClass.readHumidity();
  if (isnan(dhtTemperature) || isnan(dhtHumidity))
  {                                   // 如果读取错误
    Serial.println("读取传感器失败"); // 读取失败提示
    delay(1000);
    return;
  }

  delay(10000);
  Serial.print("我是温度");
  Serial.print(dhtTemperature);
  Serial.print(" ");
  Serial.print("我是湿度");
  Serial.print(dhtHumidity);
  Serial.print("\n");
}
