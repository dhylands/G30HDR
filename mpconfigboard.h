#define MICROPY_HW_BOARD_NAME       "G30HDR"
#define MICROPY_HW_MCU_NAME         "STM32F401CE"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (0)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)
#define MICROPY_HW_ENABLE_USB       (1)

// HSE is 12MHz - F401 does 84 MHz max
#define MICROPY_HW_CLK_PLLM (6)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV8)
#define MICROPY_HW_CLK_PLLQ (14)

// The G30HDR has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// UART config
#define MICROPY_HW_UART1_TX   (pin_B6)
#define MICROPY_HW_UART1_RX   (pin_B7)

#define MICROPY_HW_UART2_TX   (pin_A2)
#define MICROPY_HW_UART2_RX   (pin_A3)
#define MICROPY_HW_UART2_CTS  (pin_A0)
#define MICROPY_HW_UART2_RTS  (pin_A1)

#define MICROPY_HW_UART6_TX   (pin_C6)
#define MICROPY_HW_UART6_RX   (pin_C7)

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)
#define MICROPY_HW_I2C2_SCL (pin_B4)
#define MICROPY_HW_I2C2_SDA (pin_B3)

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_A4)
#define MICROPY_HW_SPI1_SCK  (pin_A5)
#define MICROPY_HW_SPI1_MISO (pin_A6)
#define MICROPY_HW_SPI1_MOSI (pin_A7)

#define MICROPY_HW_SPI3_NSS  (pin_A15)
#define MICROPY_HW_SPI3_SCK  (pin_C10)
#define MICROPY_HW_SPI3_MISO (pin_C11)
#define MICROPY_HW_SPI3_MOSI (pin_C12)

// The G30HDR has No LEDs

// The G30HDR has No SDCard

// USB config
#define MICROPY_HW_USB_FS              (1)
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
