DEFAULT_FOLDER = handwired/micromod_input_display/stm32f405

QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_DRIVERS = ili9341_spi

RGBLIGHT_ENABLE = yes

AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware

BACKLIGHT_ENABLE = yes

CUSTOM_MATRIX = lite
QUANTUM_LIB_SRC += i2c_master.c
