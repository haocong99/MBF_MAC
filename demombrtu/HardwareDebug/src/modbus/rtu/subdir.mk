################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/rtu/mbcrc.c \
D:/phanmem/learn_renasas/demombrtu/modbus/rtu/mbrtu.c 

COMPILER_OBJS += \
src/modbus/rtu/mbcrc.obj \
src/modbus/rtu/mbrtu.obj 

C_DEPS += \
src/modbus/rtu/mbcrc.d \
src/modbus/rtu/mbrtu.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/rtu/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/rtu/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\rtu\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\rtu\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\rtu\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\rtu\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\rtu\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\rtu\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

