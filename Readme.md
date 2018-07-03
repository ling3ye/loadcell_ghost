* 更新4个按键的功能
  * 重量 去皮按键（归零）
  * 重量 单位换转
  * 计时 开始计时
  * 计时 结束（再按归零）
* 增加 蓝牙模块

## LG_v11
2018-06-10
  * 已经实现OLED显示
  * 把主板更改为NodeMcu，为物联网做好准备



`NodeMcu_Hx711_Simple` NodeMcu & 重量传感器 示例程序

> __需要加载库Hx711__
>
>Hx711 接线说明：
>* [ ] +5V <--> VIN
>* [ ] GND <--> GND
>* [ ] SCK <--> D2
>* [ ] GND <--> D1

`NodeMcu_OLED_Simple` NodeMcu & OLED IIC SSD1306 示例程序

> __需要加载库SSD1306,并修改相关引脚__
>
>https://github.com/ThingPulse/esp8266-oled-ssd1306
>
> 可在IDE 管理库 搜索 esp8266 and esp32 oled driver for ssd1306 display by `Daniel Eichhorn,fabrice Weinberg`
>
>OLED 接线说明：
>* [ ] VCC <--> 3V3
>* [ ] GND <--> GND
>* [ ] SCL <--> D5
>* [ ] SDA <--> D3

>参考网址
>
>https://yunlinsong.blogspot.com/2017/04/nodemcuwifi.html
