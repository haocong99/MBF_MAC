################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/mb.c \
D:/phanmem/learn_renasas/demombrtu/modbus/user_mb_app.c 

COMPILER_OBJS += \
src/modbus/mb.obj \
src/modbus/user_mb_app.obj 

C_DEPS += \
src/modbus/mb.d \
src/modbus/user_mb_app.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

