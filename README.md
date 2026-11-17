# Arduino Embedded Labs

10 个从基础 GPIO 到定时器、中断和状态机的 Arduino / ESP32 练习。

| 目录 | 内容 |
|---|---|
| `MP0` | 点亮板载/外接 LED |
| `MP1` | 2 秒间隔闪烁 LED |
| `MP2` | 200 ms 闪烁红色 LED |
| `MP3` | 按键按下时点亮 LED |
| `MP4` | 按键切换 LED 状态 |
| `MP5` | 外部中断切换 LED |
| `MP6` | 中断切换系统模式 |
| `MP7` | 硬件定时器周期翻转 LED |
| `MP8` | 按键 + 定时器实现多状态机 |
| `MP9` | 定时器同时驱动 LED 闪烁和周期串口输出 |

## 环境

- Arduino IDE 2.x
- ESP32 Arduino Core
- 使用 `hw_timer_t` 的示例需要 ESP32 系列开发板
- 基础 GPIO 示例也可适配常见 Arduino 开发板

## 运行

1. 打开对应 `MPx/MPx.ino`。
2. 选择开发板和串口。
3. 根据代码中的引脚定义连接 LED、按键或电阻。
4. 编译并上传。

各目录都是独立 Sketch，可以分别打开运行。

## 说明

这些练习重点演示：

- `pinMode` / `digitalRead` / `digitalWrite`
- 软件延时与硬件定时器
- 外部中断和去抖
- 状态机
- 串口输出

仓库不包含 Arduino IDE、ESP32 Core 或开发板驱动安装包。
