# ------------------------------------------------
# Generic Makefile (based on gcc)
#
# ChangeLog :
# 2017-02-10 - Several enhancements + project update mode
#   2015-07-22 - first version
# ------------------------------------------------
#
######################################
# host os
######################################
OS := $(shell uname)

######################################
# target
######################################
TARGET = stm32f401re_motor


######################################
# building variables
######################################
# debug build?
DEBUG = 0
# optimization
#OPT = -Os
OPT = -O0 -g3


#######################################
# paths
#######################################
PROJECT_ROOT=../../../..
DRIVERS_DIR=${PROJECT_ROOT}/Drivers
MIDDLEWARE_DIR=${PROJECT_ROOT}/Middlewares/ST

# firmware library path
PERIFLIB_PATH = 

# Build path
BUILD_DIR = build

######################################
# source
######################################
# C sources
C_SOURCES =  \
${DRIVERS_DIR}/BSP/Components/l6230/l6230.c \
${DRIVERS_DIR}/BSP/STM32F4xx-Nucleo/stm32f4xx_nucleo.c \
${DRIVERS_DIR}/BSP/X-NUCLEO-IHM07M1/X-NUCLEO-IHM07M1.c \
${DRIVERS_DIR}/CMSIS/Device/ST/STM32F4xx/Source/system_stm32f4xx.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_can.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cec.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_crc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cryp_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cryp.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dac_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dac.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dcmi_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dcmi.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dfsdm.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma2d.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dsi.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_eth.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_fmpi2c_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_fmpi2c.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_hash_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_hash.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_hcd.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2s_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2s.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_irda.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_iwdg.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_lptim.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_ltdc_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_ltdc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_mmc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_nand.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_nor.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pccard.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_qspi.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rng.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_sai_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_sai.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_sd.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_sdram.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_smartcard.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spdifrx.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_sram.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_usart.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_wwdg.c \
${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c \
${MIDDLEWARE_DIR}/MC_6Step_Lib/Src/6Step_Lib.c \
${MIDDLEWARE_DIR}/UART_serial_com/Src/UART_UI.c \
./Src/main_F401.c \
./Src/stm32F401_nucleo_ihm07m1.c \
./Src/stm32f4xx_hal_msp.c \
./Src/stm32f4xx_it.c

# ASM sources
ASM_SOURCES =  \
./SW4STM32/startup_stm32f401xe.s


######################################
# firmware library
######################################
PERIFLIB_SOURCES = 


#######################################
# binaries
#######################################
ifeq ($(OS),Darwin)
BINPATH = /Users/hawk/toolchains/gcc-arm-none-eabi-5_4-2016q3/bin
STLINKPATH= /opt/local/bin
else
BINPATH = /home/hawk/tools/toolchains/cortex-m/gcc-arm-none-eabi-4_9-2014q4/bin
STLINKPATH= ~/stlink
endif

PREFIX = arm-none-eabi-
CC = $(BINPATH)/$(PREFIX)gcc
AS = $(BINPATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(BINPATH)/$(PREFIX)objcopy
AR = $(BINPATH)/$(PREFIX)ar
SZ = $(BINPATH)/$(PREFIX)size
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S
 
#######################################
# CFLAGS
#######################################
# cpu
CPU = -mcpu=cortex-m4

# fpu
# NONE for Cortex-M0/M0+/M3
FPU= -mfloat-abi=hard -mfpu=fpv4-sp-d16

# float-abi


# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

# macros for gcc
# AS defines
AS_DEFS = 

# C defines
C_DEFS =                    \
-DUSE_HAL_DRIVER            \
-DSTM32F401xE               \
-DUSE_STM32F4XX_NUCLEO


# AS includes
AS_INCLUDES = 

# C includes
C_INCLUDES =  \
-I${DRIVERS_DIR}/STM32F4xx_HAL_Driver/Inc \
-I${DRIVERS_DIR}/BSP/Components/Common \
-I${DRIVERS_DIR}/BSP/Components/l6230 \
-I${DRIVERS_DIR}/BSP/STM32F4xx-Nucleo \
-I${DRIVERS_DIR}/BSP/X-NUCLEO-IHM07M1 \
-I${DRIVERS_DIR}/CMSIS/Device/ST/STM32F4xx/Include \
-I${DRIVERS_DIR}/CMSIS/Include \
-I${MIDDLEWARE_DIR}/MC_6Step_Lib/Inc \
-I${MIDDLEWARE_DIR}/UART_serial_com/Inc \
-I./Inc

# compile gcc flags
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) \
          -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 \
          -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format \
          -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing \
          -Wno-parentheses -Wno-missing-braces

CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) \
         -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 \
         -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format \
         -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing \
         -Wno-parentheses -Wno-missing-braces

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif


# Generate dependency information
#CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"
CFLAGS += -MMD -MF .dep/$(*F).d

CFLAGS += -std=gnu11



#######################################
# LDFLAGS
#######################################
# link script
LDSCRIPT = ./SW4STM32/STM32F401RE-Nucleo/STM32F401VEHx_FLASH.ld

# libraries
# LIBS = -lc -lm -lnosys
LIBS = -lm
LIBDIR =
#LDFLAGS = $(MCU) -specs=nosys.specs -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections -u _printf_float
LDFLAGS = $(MCU) -specs=nosys.specs -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# default action: build all
all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin


#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))
# list of ASM program objects
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR) 
	$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/%.o: %.s Makefile | $(BUILD_DIR)
	$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(BIN) $< $@

$(BUILD_DIR):
	mkdir $@

#######################################
# clean up
#######################################
clean:
	-rm -fR .dep $(BUILD_DIR)

#######################################
# flash
#######################################
flash: $(BUILD_DIR)/$(TARGET).bin
	$(STLINKPATH)/st-flash write $< 0x08000000

#######################################
# openocd
#######################################
openocd: $(BUILD_DIR)/$(TARGET).bin
	openocd -f interface/stlink-v2.cfg -f target/stm32f1x_stlink.cfg
  
#######################################
# dependencies
#######################################
-include $(shell mkdir .dep 2>/dev/null) $(wildcard .dep/*)

# *** EOF ***
