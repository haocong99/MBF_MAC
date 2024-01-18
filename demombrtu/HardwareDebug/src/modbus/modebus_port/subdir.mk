################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/modebus_port/portevent.c \
D:/phanmem/learn_renasas/demombrtu/modbus/modebus_port/portserial.c \
D:/phanmem/learn_renasas/demombrtu/modbus/modebus_port/porttimer.c 

COMPILER_OBJS += \
src/modbus/modebus_port/portevent.obj \
src/modbus/modebus_port/portserial.obj \
src/modbus/modebus_port/porttimer.obj 

C_DEPS += \
src/modbus/modebus_port/portevent.d \
src/modbus/modebus_port/portserial.d \
src/modbus/modebus_port/porttimer.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/modebus_port/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/modebus_port/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\modebus_port\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\modebus_port\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\modebus_port\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\modebus_port\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\modebus_port\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\modebus_port\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

