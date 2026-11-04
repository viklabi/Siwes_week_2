# Switch and LED Interfacing with Arduino Uno Using Proteus

## 1. Project Overview

This project focuses on learning how to interface digital input devices (push-button switches) and output devices (LEDs) with an Arduino Uno.

The project was designed and simulated using Proteus. Eight switches were connected as digital inputs, while four LEDs served as output indicators.

The Arduino was programmed to read the states of the switches and process them using four basic digital logic operations: AND, OR, NAND, and NOR.

This exercise provided practical experience with Arduino digital input/output configuration, logical operators, and controlling electronic components through embedded programming.
## 2. Circuit Design and Components

### 2.1 Components Used

The following components were used to design and simulate the circuit in Proteus:

| Component | Quantity | Description |
|---|---:|---|
| Arduino 328 / ATmega328 | 1 | Main microcontroller |
| Push-button switches | 8 | Digital input devices |
| LEDs | 4 | Visual output indicators |
| 10kΩ resistors | 8 | Pull-down resistors for switch inputs |
| 220Ω resistors | 4 | Current-limiting resistors for LEDs |
| Connecting wires | As required | Electrical connections |

### 2.2 Circuit Architecture

The circuit was divided into four independent sections, each representing a different digital logic gate.

Each section consists of two push-button switches connected to Arduino digital input pins and one LED connected to an Arduino digital output pin.

The Arduino reads the input states, evaluates the corresponding logical condition, and controls the LED based on the result.

The four sections implement:

1. AND gate
2. OR gate
3. NAND gate
4. NOR gate
