# AUTOSAR CAN Communication Example

This repository demonstrates a **beginner-friendly AUTOSAR-like CAN communication** project, simulating:

- Basic CAN driver (`Can`)  
- CAN Interface (`CanIf`)  
- Software Component (`SWC`) for temperature monitoring  

## Features
- CAN driver initialization
- Send and receive CAN messages (loopback simulation)
- Simple SWC task to read a sensor and send it via CAN
- Ready for testing with unit tests

## Project Structure
- `src/` → Source files (driver, interface, SWC)
- `include/` → Standard types and configuration
- `tests/` → Unit tests for modules
- `diagrams/` → Communication flow and architecture diagrams

## How to Run
```bash
gcc src/*.c -o autosar_can_example
./autosar_can_example
