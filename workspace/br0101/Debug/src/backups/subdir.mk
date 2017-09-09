################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.c 

OBJS += \
./src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.o 

C_DEPS += \
./src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.d 


# Each subdirectory must supply rules for building sources it contributes
src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.o: ../src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.c
	@echo 'Building file: $<'
	@echo 'Invoking: MicroBlaze gcc compiler'
	mb-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../br0101_bsp/microblaze_0/include -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.50.c -mno-xl-soft-mul -Wl,--no-relax -ffunction-sections -fdata-sections -MMD -MP -MF"src/backups/helloworld - DB test, reg rw, uart polling.d" -MT"src/backups/helloworld\ -\ DB\ test,\ reg\ rw,\ uart\ polling.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


