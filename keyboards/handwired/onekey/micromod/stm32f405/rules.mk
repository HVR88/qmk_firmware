# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

AUDIO_ENABLE = yes
AUDIO_DRIVER = dac_additive
