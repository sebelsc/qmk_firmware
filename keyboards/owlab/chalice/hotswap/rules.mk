MCU_LDSCRIPT = STM32F103x8_0x08006000_bootloader
DFU_ARGS = -d 1688:2220 -a 0 -s 0x08006000
DFU_SUFFIX_ARGS = -v 1688 -p 2220
BOOTLOADER_TYPE = stm32duino
OPT_DEFS += -DBOOTLOADER_STM32DUINO

DEFERRED_EXEC_ENABLE = yes
