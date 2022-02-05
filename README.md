# EFEKTA_eON213z

我的新Zigbee项目. 带有2.13英寸墨水屏的温湿度传感器,低功耗,小体积,可磁吸式设计.设备使用SHTC3传感器,CC2530芯片,CR2477电池.  参阅"Zigbee2MQTT,cha"获取帮助.

汉化by 塔可

## 禁止用于商业营利性生产,仅供个人使用

#### 捐赠链接: [https://paypal.me/efektalab](https://paypal.me/efektalab)

#### 购买链接: [https://www.tindie.com/products/diyberk/indoor-climate-sensor-efekta-eon213-zigbee/](https://www.tindie.com/products/diyberk/indoor-climate-sensor-efekta-eon213-zigbee/)

#### 视频:[ https://youtu.be/5huTVfVpZgs](https://youtu.be/5huTVfVpZgs)

#### 电报 ZigDev - [https://t.me/zigdev](https://t.me/zigdev)

#### 电报 DiyDev - [https://t.me/diy_devices](https://t.me/diy_devices)

更多资料请见 [http://efektalab.com/eON213z](http://efektalab.com/eON213z)

## V1_R1

![Indoor climate sensor EFEKTA eON213 Zigbee](https://github.com/smartboxchannel/EFEKTA_eON213z/blob/main/IMAGES/002.jpg)

![Indoor climate sensor EFEKTA eON213 Zigbee](https://github.com/smartboxchannel/EFEKTA_eON213z/blob/main/IMAGES/EFEKTA_eON213z.jpg)

### 烧录方法:

1. 下载烧录软件 "Smart RF Flash Programmer V1" [https://www.ti.com/tool/FLASH-PROGRAMMER](https://www.ti.com/tool/FLASH-PROGRAMMER)
2. 打开软件,选择"HEX"后缀的固件文件
3. 使用有线连接CC调试器与设备,先擦除芯片上的内容,之后烧录固件.

---

### 如何安装 IAR

参考链接:  

https://github.com/ZigDevWiki/zigdevwiki.github.io/blob/main/docs/Begin/IAR_install.md   (404)

[https://github.com/sigma7i/zigbee-wiki/wiki/zigbee-firmware-install](https://github.com/sigma7i/zigbee-wiki/wiki/zigbee-firmware-install) (网页为俄文,可以使用谷歌翻译,有详细步骤)

---

### 如何配网:

#### 如果设备是全新的(崭新出场'FN',刚拿到手的模块一般都是此模式):

##### 方案A:

1. 打开z2m软件,确保设备现在可以配网
2. 装入设备的电池
3. 点击z2m上面的按钮 - 允许加入(你有180秒的时间来配网)
4. 去LOGS菜单
5. 按下设备上的重启(reset)按钮 (配网过程即将开始,设备开始闪烁LED灯)
6. 等待设备配网,如果led闪烁五次,那么设备配网成功;如果led闪烁两次,那么配网失败.

##### 方案B:

1. 打开z2m软件,确保设备现在可以配网
2. 装入设备的电池
3. 点击z2m上面的按钮 - 允许加入(你有180秒的时间来配网)
4. 去LOGS菜单
5. 按住按钮(1) 2-3秒钟,直到设备开始闪烁LED    PS:只有这一步不一样
6. 等待设备配网,如果led闪烁五次,那么设备配网成功;如果led闪烁两次,那么配网失败.

#### 如果设备已经在网络中:

##### 方案A:

1. 按住按钮(1) 10秒钟,这将会重置设备,使其进入FN(崭新出厂)模式.
2. 点击z2m上面的按钮 - 允许加入(你有180秒的时间来配网).
3. 去LOGS菜单.
4. 按住按钮(1) 2-3秒钟,直到设备开始闪烁LED.
5. 等待设备配网,如果led闪烁五次,那么设备配网成功;如果led闪烁两次,那么配网失败.

##### 方案B:

1.从z2m的设备列表中找到设备,然后使用强制删除功能将其删除.
2. 点击z2m上面的按钮 - 允许加入(你有180秒的时间来配网).
3. 去LOGS菜单.
4. 按下设备上的重启(reset)按钮 (配网过程即将开始,设备开始闪烁LED灯)
5. 等待设备配网,如果led闪烁五次,那么设备配网成功;如果led闪烁两次,那么配网失败.

![Efekta THP_LR \ THP](https://github.com/smartboxchannel/EFEKTA_eON213z/blob/main/IMAGES/003.jpg)

### 故障排查:

如果设备没有成功配网,请尝试如下操作:

1. 关掉你网络里面的路由器(直接拔电源就行)
2. 把设备放在路由器旁边(大约一米).
   当然,如果你不能关掉路由器的话,(比如内置的开关,或者墙内的路由器),你可以试试如下操作:
   2.1. 拔掉你设备的天线.
   2.2. 把设备靠近路由器(1-3 厘米).
   塔可注:这一步我不是特别明白,大概是减少干扰的wifi信号吧.
3. 上电,开机.
4. 重启你的设备 (比如,重新启动你使用的Zigbee2MQTT).

如果你的设备还是没有加入成功

1. 如果你的设备出现在z2m的设备列表.从设备列表使用强制删除功能将其删除.
2. 重启你的设备 (比如,重新启动你使用的Zigbee2MQTT).
3. 点击z2m上面的按钮 - 允许加入(你有180秒的时间来配网).
4. 去LOGS菜单.
5. 按住按钮(1) 2-3秒钟,直到设备开始闪烁LED.
6. 等待设备配网,如果led闪烁五次,那么设备配网成功;如果led闪烁两次,那么配网失败.

### 疑难杂症排查:

请你务必确保如下内容:

1. 你的直流供电是正常的(一个电池应该有3V以上的电压).你可以暂时使用一个外置供电来测试(比如说,从编程器上面取电)
2. 你E18板子的RF射频部分工作正常.你可以上传另一个固件然后将你的设备配对.或者你也可以用另外一个设备建立一个独立的测试用Zigbee网络.
3. 你的设备仍然有可供链接的空闲频道.
4. 你的设备允许加入.
5. 你的设备没有加入其他的开放Zigbee网络.当你按住按钮时,他应当每3-4秒钟闪烁一次.这个表示你的设备处于加入状态.
