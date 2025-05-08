# STM32


STM32 is a family of 32-bit microcontrollers developed by STMicroelectronics. These microcontrollers are based on ARM Cortex-M cores, offering a wide range of performance and features for embedded systems.
Popular STM32 Families:
STM32F0/F1/F3: Entry to mid-level general-purpose MCUs.
STM32F4/F7: High-performance MCUs with DSP and FPU.
STM32L0/L4/U5: Low-power families.
STM32H7: Highest performance STM32 line with dual-core support.
STM32WB: Wireless MCUs with Bluetooth, Zigbee, Thread.


STM32L4 MCUs:
The STM32L4 series is a family of ultra-low-power, high-performance 32-bit microcontrollers based on the ARM Cortex-M4 core. It is designed for applications that require both energy efficiency and high processing power, making it ideal for battery-powered devices, IoT applications, wearable electronics, and medical devices.

1. Core Specifications:
●CPU: ARM Cortex-M4 with Floating Point Unit (FPU)
●Frequency: Up to 80 MHz
●Flash Memory: 256 KB
●SRAM: 64 KB
●Package: UFQFPN32 (5 mm x 5 mm)
●Operating Voltage: 1.71 V to 3.6 V
●Temperature Range: -40°C to 85°C
 2. Peripherals
●Digital Interfaces:
UART/USART: 3 total (including 1 LPUART for ultra-low-power comms)
I2C: 2 interfaces
SPI/I2S: 2 interfaces
USB: Full-Speed Device (with crystal-less operation)
SWPMI: Single Wire Protocol Master Interface
●Timers:
1x 16-bit advanced control timer (TIM1)
1x 32-bit timer
Basic and general-purpose timers for PWM, input capture, output compare
●Analog Interfaces:
ADC: 12-bit, up to 5 MSPS, 16 channels
DAC: 2 channels
Comparators: 2
Operational Amplifier: 1


STM32WB55 MCUs:
The STM32WB55RG is a microcontroller from STMicroelectronics, part of the STM32WB family, designed specifically for wireless applications. It features an ARM Cortex-M4 core and is equipped with a Bluetooth 5.0 and IEEE 802.15.4 (Thread, Zigbee) radio stack, making it ideal for Internet of Things (IoT) and wireless connectivity applications. Below is a detailed overview of the STM32WB55RG microcontroller.
Key Features of STM32WB55RG
1. Microcontroller Core
●	Core: ARM Cortex-M4 core with FPU (Floating Point Unit).
●	Speed: Runs at up to 64 MHz.
●	Flash Memory: 512 KB of Flash memory for program storage.
●	RAM: 128 KB of SRAM for data storage and processing.
●	Power Consumption: Designed for low-power consumption, making it ideal for battery-operated devices (with support for various low-power modes).
2. Wireless Connectivity
The STM32WB55RG is designed for wireless communication and supports multiple communication standards:
●	Bluetooth 5.0 (BLE): Supports Bluetooth Low Energy (BLE) for low-power wireless communication, making it ideal for applications like smart homes, fitness trackers, and healthcare.
●	IEEE 802.15.4: Provides support for the Zigbee and Thread protocols, which are widely used in IoT applications for reliable, low-power, and mesh networking. These protocols are used in smart home systems, industrial automation, and sensor networks.
The chip includes the hardware radio components necessary for both Bluetooth and IEEE 802.15.4 communication, reducing the need for external modules and improving efficiency and integration.
3. Advanced Peripherals
The STM32WB55RG provides a rich set of peripherals to support a wide range of applications:
●	GPIOs: Up to 68 General Purpose Input/Output pins.
●	Timers: Multiple 16-bit and 32-bit timers for PWM, event counting, and time-sensitive applications.
●	ADC: 12-bit Analog-to-Digital Converter (ADC), with 16 channels, supporting up to 1 MSPS.
●	DAC: 12-bit Digital-to-Analog Converter (DAC) for analog output signals.
●	USART/UART: Multiple UART and USART interfaces for serial communication.
●	I2C: Integrated I2C (Inter-Integrated Circuit) interfaces for communication with low-speed peripherals.
●	SPI: Supports SPI for high-speed communication with external devices like sensors, memory chips, and displays.
●	CAN: Controller Area Network (CAN) for automotive and industrial applications.
●	PWM: Pulse Width Modulation output through timers, useful for motor control, dimming LEDs, etc.
●	Watchdog Timers: For system reliability, watchdog timers can reset the microcontroller in case of software failure.

Wireless communication eliminates cables and enables remote data transfer.
Different technologies serve different applications (RF, Wi-Fi, Bluetooth, LoRa).
Embedded systems use wireless modules for IoT, remote sensing, automation.
The STM32WB55 is a dual-core wireless microcontroller that supports Bluetooth Low Energy (BLE) 5.2, Zigbee 3.0, and Thread 1.1. These are three different wireless communication protocols designed for IoT applications.

Wireless Protocols in STM32WB55:
BLE 5.2-	Low-power wireless communication,used in Smart wearables, health monitoring, IoT sensors.
Zigbee 3.0-	Mesh networking for home automation,used in	Smart lights, smart home devices, industrial IoT.
Thread 1.1-	IPv6-based mesh networking,used in Smart homes, Matter protocol, low-power IoT.


SensorBridge IoT System:
This represents a multi-sensor embedded monitoring system designed for real-time data acquisition, processing, and wireless communication. The system integrates two STM32 microcontrollers—WB55RG and L432KC—with various peripheral sensors including an IMU sensor (for motion/orientation) and an ultrasonic (US) sensor (for distance measurement).
The L432KC microcontroller collects distance data from the US sensor and transmits it via UART to the WB55RG, which also interfaces with the IMU sensor. The WB55RG handles Bluetooth communication with a mobile device, relaying sensor data for user interaction. Additionally, sensor data is used to trigger local feedback components like a buzzer and LED for real-time alerts.
The system also supports IoT connectivity through a Raspberry Pi Pico W module, which receives sensor data from the L432KC via UART and uploads it to the ThingSpeak cloud platform for remote monitoring and analysis.
This architecture enables a complete edge-to-cloud sensing solution, suitable for applications such as safety monitoring, wearable devices, smart assistance, and real-time environmental tracking.




