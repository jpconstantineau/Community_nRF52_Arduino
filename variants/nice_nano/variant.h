 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_NICE_NANO_
#define _VARIANT_NICE_NANO_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define _PINNUM(port, pin)     ((port)*32 + (pin))

// Number of pins defined in PinDescription array
#define PINS_COUNT           (48)
#define NUM_DIGITAL_PINS     (48)
#define NUM_ANALOG_INPUTS    (8u)
#define NUM_ANALOG_OUTPUTS   (0u)


// LEDs
#define PIN_LED1             _PINNUM(0, 15) // Blue


#define LED_BUILTIN          PIN_LED1  // added to support examples - just in case...
#define LED_CONN             PIN_LED1  // added to support examples - just in case...

#define LED_RED              PIN_LED1  // added to support examples - just in case...
#define LED_BLUE             PIN_LED1

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Buttons
 */
// no Buttons
#define BUTTON_1          _PINNUM(0, 18)  // unusable: RESET
#define BUTTON_2          _PINNUM(0, 19)  // no connection

/*
 * Analog pins
 */
#define PIN_A0               (2)
#define PIN_A1               (3)
#define PIN_A2               (4)
#define PIN_A3               (5)
#define PIN_A4               (28)
#define PIN_A5               (29)
#define PIN_A6               (30)
#define PIN_A7               (31)

#define PIN_VBAT           PIN_A7

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
static const uint8_t A6  = PIN_A6 ;
static const uint8_t A7  = PIN_A7 ;
#define ADC_RESOLUTION    14
#define PIN_AREF           (2)

static const uint8_t AREF = PIN_AREF;

#define PIN_NFC1           _PINNUM(0, 9)
#define PIN_NFC2           _PINNUM(0, 10)


/*
 * Serial interfaces
 */

// Arduino Header D0, D1
#define PIN_SERIAL1_RX      (8) // P0.08
#define PIN_SERIAL1_TX      (6) // P0.06


/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (43)  // P1.11
#define PIN_SPI_MOSI         (10)  // P0.10
#define PIN_SPI_SCK          (45)  // P1.13

static const uint8_t SS   = (9) ;  // 0.09
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (17)  // 0.17
#define PIN_WIRE_SCL         (20)  // 0.20




#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif // End of _VARIANT_NICE_NANO_
