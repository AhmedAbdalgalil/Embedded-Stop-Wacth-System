################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BUZZER.c \
../EXT_INT.c \
../LED.c \
../Servent.c \
../Timer.c \
../main.c \
../segment.c 

OBJS += \
./BUZZER.o \
./EXT_INT.o \
./LED.o \
./Servent.o \
./Timer.o \
./main.o \
./segment.o 

C_DEPS += \
./BUZZER.d \
./EXT_INT.d \
./LED.d \
./Servent.d \
./Timer.d \
./main.d \
./segment.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


