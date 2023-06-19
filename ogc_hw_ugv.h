#ifndef OGC_HW_UGV_H
#define OGC_HW_UGV_H

/* =====================================================================================================================
 *                                                                                                             Processor
 * =====================================================================================================================
 */
/*                                                                             Processor - Microchip Atmel ATMega328P */
#define HW_SYS_CPU_ATMEGA328P ( 1U ) /* safety check must match firmware csp selection */

/* =====================================================================================================================
 *                                                                                                                Clocks
 * =====================================================================================================================
 */
/*                                                                                                 Clock - OSC 16 MHz */
#define HW_SYS_CLOCK_XT1 ( 1U ) /* trigger to configure external clock */
#define HW_SYS_CLOCK_XT1_SPEED ( 16000000U ) /* time calculations base off this value */

/* =====================================================================================================================
 *                                                                                                        User Interface
 * =====================================================================================================================
 */
/*                                                                                  User Interface - Status Indicator */
#define HW_UI_INDICATOR_STATUS_SINGLE ( 1U ) /* trigger to configure as output and include driver/library support */
#define HW_UI_INDICATOR_STATUS_SINGLE_PIN ( 5U )
#define HW_UI_INDICATOR_STATUS_SINGLE_DIR ( DDRB )
#define HW_UI_INDICATOR_STATUS_SINGLE_OUT ( PORTB )

/*                                                                                         User Interface - IR Remote */
#define HW_UI_IR_REMOTE ( 1U ) /* trigger to configure as input with interrupt and include driver/library support */
#define HW_UI_IR_REMOTE_INPUT_PIN ( 3U )
#define HW_UI_IR_REMOTE_INPUT_DIR ( DDRD )
#define HW_UI_IR_REMOTE_INPUT_OUT ( PORTD )

/*                                                                                              User Interface - UART */
#define HW_UI_UART ( 1U ) /* trigger to configure uart module and associated pins, interrupts and buffers */
/*                                                                        RXD */
#define HW_UI_UART_RX_PIN ( 0U )
#define HW_UI_UART_RX_DIR ( DDRD )
#define HW_UI_UART_RX_OUT ( PORTD )
/*                                                                        TXD */
#define HW_UI_UART_TX_PIN ( 1U )
#define HW_UI_UART_TX_DIR ( DDRD )
#define HW_UI_UART_TX_OUT ( PORTD )

/* =====================================================================================================================
 *                                                                                                        Motion Control
 * =====================================================================================================================
 */
/*                                                                                                L298N Motor Control */
#define HW_MOTION_L298N_DRIVER ( 1U ) /* trigger to include driver for control of L298N */
#define HW_MOTION_L298N_OUTPUTS ( 4U ) /* trigger to configure as outputs */
#define HW_MOTION_ENCODER_INPUTS ( 4U ) /* trigger to configure inputs, interrupts, and include drivers/libraries */
/* TODO: add drive configuration limitations/layout ( tank, 4x mechanum, driver_and_steer ) */
/* TODO: add any hardware limitations to range, speed, etc. */
/*                                                                        ENA */
#define HW_MOTION_L298N_ENA_PIN ( 6U )
#define HW_MOTION_L298N_ENA_DIR ( DDRD )
#define HW_MOTION_L298N_ENA_OUT ( PORTD )
/*                                                                        ENB */
#define HW_MOTION_L298N_ENB_PIN ( 5U )
#define HW_MOTION_L298N_ENB_DIR ( DDRD )
#define HW_MOTION_L298N_ENB_OUT ( PORTD )
/*                                                                       OUT1 */
#define HW_MOTION_L298N_OUT1_PIN ( 3U )
#define HW_MOTION_L298N_OUT1_DIR ( DDRB )
#define HW_MOTION_L298N_OUT1_OUT ( PORTB )
/*                                                                       OUT2 */
#define HW_MOTION_L298N_OUT2_PIN ( 1U )
#define HW_MOTION_L298N_OUT2_DIR ( DDRB )
#define HW_MOTION_L298N_OUT2_OUT ( PORTB )
/*                                                                       OUT3 */
#define HW_MOTION_L298N_OUT3_PIN ( 0U )
#define HW_MOTION_L298N_OUT3_DIR ( DDRB )
#define HW_MOTION_L298N_OUT3_OUT ( PORTB )
/*                                                                       OUT4 */
#define HW_MOTION_L298N_OUT4_PIN ( 7U )
#define HW_MOTION_L298N_OUT4_DIR ( DDRD )
#define HW_MOTION_L298N_OUT4_OUT ( PORTD )
/*                                                                        IN1 */
#define HW_MOTION_ENCODER_IN1_PIN ( 0U )
#define HW_MOTION_ENCODER_IN1_DIR ( DDRC )
#define HW_MOTION_ENCODER_IN1_OUT ( PORTC )
/*                                                                        IN2 */
#define HW_MOTION_ENCODER_IN2_PIN ( 1U )
#define HW_MOTION_ENCODER_IN2_DIR ( DDRC )
#define HW_MOTION_ENCODER_IN2_OUT ( PORTC )
/*                                                                        IN3 */
#define HW_MOTION_ENCODER_IN3_PIN ( 2U )
#define HW_MOTION_ENCODER_IN3_DIR ( DDRC )
#define HW_MOTION_ENCODER_IN3_OUT ( PORTC )
/*                                                                        IN4 */
#define HW_MOTION_ENCODER_IN4_PIN ( 3U )
#define HW_MOTION_ENCODER_IN4_DIR ( DDRC )
#define HW_MOTION_ENCODER_IN4_OUT ( PORTC )

/* =====================================================================================================================
 *                                                                                                               Mapping
 * =====================================================================================================================
 */
/*                                                                                           Servo PING Sweep Control */
#define HW_MAPPING_PING_DRIVER ( 1U ) /* trigger to configure pins and associated drivers/libraries*/
#define HW_MAPPING_AXES ( 1U ) /* trigger to configure the motion control algorithms and associated mapping libraries */
/* TODO: add PWM config trigger and any limitations to range, speed, etc. */
/*                                                                      Servo */
#define HW_MAPPING_SWEEP_PIN ( 3U )
#define HW_MAPPING_SWEEP_DIR ( DDRD )
#define HW_MAPPING_SWEEP_OUT ( PORTD )
/*                                                                    Trigger */
#define HW_PING_TRIGGER_PIN ( 5U )
#define HW_PING_TRIGGER_DIR ( DDRC )
#define HW_PING_TRIGGER_OUT ( PORTC )
/*                                                                       Echo */
#define HW_PING_ECHO_PIN ( 4U )
#define HW_PING_ECHO_DIR ( DDRC )
#define HW_PING_ECHO_OUT ( PORTC )

/*                                                                                                        Line Tacker */
#define HW_MAPPING_LINE_DRIVER ( 3U ) /* trigger to configure pins inputs, interrupts, and drivers/libraries */
/*                                                                       Left */
#define HW_LINE_LEFT_PIN ( 2U )
#define HW_LINE_LEFT_DIR ( DDRD )
#define HW_LINE_LEFT_OUT ( PORTD )
/*                                                                     Middle */
#define HW_LINE_MIDDLE_PIN ( 4U )
#define HW_LINE_MIDDLE_DIR ( DDRD )
#define HW_LINE_MIDDLE_OUT ( PORTD )
/*                                                                      Right */
#define HW_LINE_RIGHT_PIN ( 2U )
#define HW_LINE_RIGHT_DIR ( DDRB )
#define HW_LINE_RIGHT_OUT ( PORTB )

#endif /* OGC_HW_UGV_H*/
