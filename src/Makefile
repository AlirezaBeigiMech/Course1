#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Architecture Specific Flags
# make build PLATFORM=HOST

# Platform Specific Flags

Add = $(INCLUDES)
#echo $(PLATFORM)



LINKER_FILE = msp432p401r.lds
TARGET = c1m2



ifeq ($(PLATFORM),HOST)

CC = gcc
LDFLAGS = -Wl,-Map=$(TARGET).map 
CFLAGS = -std=c99 -Werror -g -O0 -Wall -DHOST $(Add) 

else
CPU = cortex-m4
ARCH = thumb
MODEL = armv7e-m
ABI = hard
SPECS = nosys.specs
FPU = fpv4-sp-d16
CC = arm-none-eabi-gcc
LD = arm-none-eabi-ld
LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
CFLAGS = -std=c99 -Werror -g -O0 -mcpu=$(CPU) -m$(ARCH) -march=$(MODEL) -mfloat-abi=$(ABI) -mfpu=$(FPU) --specs=$(SPECS) -Wall -DMSP432 $(Add) 

SOURCE = main.c \
		memory.c \
		interrupts_msp432p401r_gcc.c \
		startup_msp432p401r_gcc.c \
		system_msp432p401r.c\
		data.c\
		course1.c
endif


OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.dep)
PRES = $(SRCS:.c=.i)
ASMS = $(SRCS:.c=.asm)



%.o : %.c 
	$(CC) -c $< $(CFLAGS) -o $@
%.i : %.c 
	$(CC) -E $< $(CFLAGS) -o $@
%.asm : %.c 
	$(CC) -O2 -S -c $< $(CFLAGS) -o $@
%.dep : %.c 
	$(CC) $(CFLAGS) -MM $^ -MF $@


.PHONY: build

compile-all: $(OBJS)

build: all

.PHONY: all
all: $(TARGET).out

$(TARGET).out: $(OBJS) 
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@  -DVERBOSE 
	$(SIZE) $@


.PHONY: clean
clean:
	del $(OBJS) $(ASMS) $(PRES) $(DEPS) $(TARGET).out $(TARGET).map


-include $(DEPS)