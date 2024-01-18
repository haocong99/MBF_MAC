################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/ascii/mbascii.c 

COMPILER_OBJS += \
src/modbus/ascii/mbascii.obj 

C_DEPS += \
src/modbus/ascii/mbascii.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/ascii/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/ascii/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\ascii\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\ascii\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\ascii\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\ascii\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\ascii\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\ascii\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

