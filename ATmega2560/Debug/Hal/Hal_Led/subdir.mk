################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Hal/Hal_Led/Hal_Led_prog.c 

OBJS += \
./Hal/Hal_Led/Hal_Led_prog.o 

C_DEPS += \
./Hal/Hal_Led/Hal_Led_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Hal/Hal_Led/%.o: ../Hal/Hal_Led/%.c Hal/Hal_Led/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


