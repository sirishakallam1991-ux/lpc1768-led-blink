# LPC1768 LED Blink

> Bare-metal LED blink on LPC1768 — direct register access, no HAL functions , simulated in Keil MDK

## What This Does
Blinks the onboard LED by directly writing to GPIO registers FIODIR, FIOSET 
and FIOCLR on Port 1 Pin 18. No HAL library used — pure register level C code.

## Board
- LPC1768 (Cortex-M3)
- Simulated in Keil MDK v5

## Registers Used
| Register | Purpose |
|----------|---------|
| FIODIR   | Set pin as output |
| FIOSET   | Turn LED ON |
| FIOCLR   | Turn LED OFF |

## How to Run
1. Open `Led_Blinking.uvproj` in Keil MDK
2. Press F7 to build
3. Press Ctrl+F5 to simulate
4. Open Peripherals → GPIO → GPIO1 to watch pin toggle

## Skills Demonstrated
- Bare-metal C programming
- ARM Cortex-M3 GPIO control
- Direct peripheral register access

## Author
Sirisha Kallam — Embedded Systems Engineer
