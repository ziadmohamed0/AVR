################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mcal/Mcal_DIO/Mcal_DIO_prog.c 

OBJS += \
./Mcal/Mcal_DIO/Mcal_DIO_prog.o 

C_DEPS += \
./Mcal/Mcal_DIO/Mcal_DIO_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Mcal/Mcal_DIO/%.o: ../Mcal/Mcal_DIO/%.c Mcal/Mcal_DIO/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


