#pragma once

// HID Bootloader takes 4K
#define USER_PROGRAM 0x08001000

#define RTC_BOOTLOADER_FLAG 0x7662 /* Flag whether to jump into bootloader, "vb" */
#define RTC_INSECURE_FLAG 0x4953 /* Flag to indicate qmk that we want to boot into insecure mode, "IS" */

#if defined(TARGET_GENERIC)
#define VIAL_KEYBOARD_UID {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_VIAL_TEST)
#define VIAL_KEYBOARD_UID {0x6F, 0xC5, 0xEE, 0x60, 0x90, 0x92, 0x53, 0xA4}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_WEAVEN)
#define VIAL_KEYBOARD_UID {0x68, 0xBF, 0xB0, 0x60, 0x95, 0xBB, 0x5C, 0x33}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOA
#define BL_OUTPUT_PIN 4
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 12
#elif defined(TARGET_ADELAIS_F103)
#define VIAL_KEYBOARD_UID {0x68, 0xBF, 0xB0, 0x60, 0x95, 0xBB, 0x5C, 0x33}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 1
#define BL_INPUT_BANK GPIOA
#define BL_INPUT_PIN 10
#else
#error Unknown target
#endif
