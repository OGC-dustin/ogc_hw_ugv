# OGC.Engineering
## ogc-hw-ugv - Unmanned Ground Vehicle Hardware Description
Developer contact - dustin < at > ogc.engineering

---
Location:

- Hardware Definition:
    - location: hardware/ogc-hw-ugv/
    - repo: https://github.com/OGC-dustin/ogc-hw-ugv

Hardware:
- Based on the Elegoo Car Kit v3.0 ( https://www.elegoo.com/products/elegoo-smart-robot-car-kit-v-3-0-plus )
- CPU - Atmel ATMega328P on an Arduino Uno development platform
    - 8-bit AVR® RISC-based microcontroller
    - 32 KB Flash
    - 1 KB EEPROM
    - 2 KB RAM
    - 2 instruction words/vector
    - Separate bootloader section ( SPM instruction can only execute here )
    - real Read-While-Write Self-Programming
- Daughter card / Shield - Elegoo Car Shield v3.0
    - L298N Motor Control ( 4x DC motors )
    - Bluetooth Serial - Planned remote control and telemetry to a PC side scripts, actions to be determined
    - IR Remote Control - HMI ( Human Machine Interface ), actions to be determined
    - possible use of PING distance sensor, Line follower sensor, Servo control, etc. or reuse of pins ( see hardware description for final results)

Resources:
- Datasheet: https://www.microchip.com/en-us/product/ATMEGA328P

Pin Mapping ( ATMega328P - 28 pin DIP package ):

```
[ RESET ]                     ( !RESET/PCINT14 ) PC6 [ 01 ][ 28 ] PC5 ( PCINT13/ADC5/SCL )           [ A5/PING/TRIGGER ]
[ D0/RXD ]                       ( RXD/PCINT16 ) PD0 [ 02 ][ 27 ] PC4 ( PCINT12/ADC4/SDA )              [ A4/PING/ECHO ]
[ D1/TXD ]                       ( TXD/PCINT17 ) PD1 [ 03 ][ 26 ] PC3 ( PCINT11/ADC3 )                 [ A3/N4-ENCODER ]
[ D2/LINE/LEFT ]                ( INT0/PCINT18 ) PD2 [ 04 ][ 25 ] PC2 ( PCINT10/ADC2 )                 [ A2/N3-ENCODER ]
[ D3/Servo(PWM) ]          ( OC2B/INT1/PCINT19 ) PD3 [ 05 ][ 24 ] PC1 ( PCINT9/ADC1 )                  [ A1/N2-ENCODER ]
[ D4/LINE/MIDDLE ]            ( XCK/T0/PCINT20 ) PD4 [ 06 ][ 23 ] PC0 ( PCINT8/ADC0 )                  [ A0/N1-ENCODER ]
[  ]                                             Vcc [ 07 ][ 22 ] GND                                               [  ]
[  ]                                             GND [ 08 ][ 21 ] Aref                                              [  ]
[ OSC1 ]                  ( XTAL1/TOSC1/PCINT6 ) PB6 [ 09 ][ 20 ] AVcc                                              [  ]
[ OSC2 ]                  ( XTAL2/TOSC2/PCINT7 ) PB7 [ 10 ][ 19 ] PB5 ( PCINT5/SCK )                             [ D13 ]
[ D5/L298N(PWM)/ENB ]        ( OC0B/T1/PCINT21 ) PD5 [ 11 ][ 18 ] PB4 ( PCINT4/MISO )                         [ D12/IR ]
[ D6/L298N(PWM)/ENA ]      ( OC0A/AIN0/PCINT22 ) PD6 [ 12 ][ 17 ] PB3 ( PCINT3/MOSI/OC2A )         [ D11/L298N(PWM)/N1 ]
[ D7/L298N/N4 ]                 ( AIN1/PCINT23 ) PD7 [ 13 ][ 16 ] PB2 ( PCINT2/!SS/OC1B )             [ D10/LINE/RIGHT ]
[ D8/L298N/N3 ]             ( CLKO/ICP1/PCINT0 ) PB0 [ 14 ][ 15 ] PB1 ( PCINT1/OC1A )               [ D9/L298N(PWM)/N2 ]
```

