################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/tcp/mbtcp.c 

COMPILER_OBJS += \
src/modbus/tcp/mbtcp.obj 

C_DEPS += \
src/modbus/tcp/mbtcp.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/tcp/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/tcp/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\tcp\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\tcp\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\tcp\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\tcp\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\tcp\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\tcp\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

