# MCU name
MCU = SN32F248BF

# Build Options
#   comment out to disable the options.
#
LTO_ENABLE              = no
BACKLIGHT_ENABLE        = no
MAGIC_ENABLE            = yes
MAGIC_KEYCODE_ENABLE    = yes
BOOTMAGIC_ENABLE        = yes # Virtual DIP switch configuration
MOUSEKEY_ENABLE         = no  # Mouse keys
EXTRAKEY_ENABLE         = yes # Audio control and System control
CONSOLE_ENABLE          = no  # Console for debug
COMMAND_ENABLE          = no  # Commands for debug and configuration
SLEEP_LED_ENABLE        = no  # Breathing sleep LED during USB suspend
NKRO_ENABLE             = yes # USB Nkey Rollover
AUDIO_ENABLE            = no
RGBLIGHT_ENABLE         = no
SERIAL_LINK_ENABLE      = no
WAIT_FOR_USB            = yes
NO_USB_STARTUP_CHECK    = yes
CUSTOM_MATRIX           = yes
DIP_SWITCH_ENABLE       = no
KEYBOARD_SHARED_EP      = no
DEBOUNCE_TYPE = sym_eager_pk

# Custom RGB matrix handling
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = SN32F24xB

# project specific files
SRC = ../../../drivers/led/sn32/matrix_sn32f24xx.c

OPT_DEFS += -DOPTICAL_MATRIX
