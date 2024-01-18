################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbfunccoils.c \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbfuncdisc.c \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbfuncholding.c \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbfuncinput.c \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbfuncother.c \
D:/phanmem/learn_renasas/demombrtu/modbus/functions/mbutils.c 

COMPILER_OBJS += \
src/modbus/functions/mbfunccoils.obj \
src/modbus/functions/mbfuncdisc.obj \
src/modbus/functions/mbfuncholding.obj \
src/modbus/functions/mbfuncinput.obj \
src/modbus/functions/mbfuncother.obj \
src/modbus/functions/mbutils.obj 

C_DEPS += \
src/modbus/functions/mbfunccoils.d \
src/modbus/functions/mbfuncdisc.d \
src/modbus/functions/mbfuncholding.d \
src/modbus/functions/mbfuncinput.d \
src/modbus/functions/mbfuncother.d \
src/modbus/functions/mbutils.d 

# Each subdirectory must supply rules for building sources it contributes
src/modbus/functions/%.obj: D:/phanmem/learn_renasas/demombrtu/modbus/functions/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\modbus\functions\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\functions\cDepSubCommand.tmp"
	ccrx -subcommand="src\modbus\functions\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)"  -MT="$(@:%.d=%.obj)"  -MT="$(@:%.obj=%.d)" "$<"
	@echo src\modbus\functions\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\modbus\functions\cSubCommand.tmp"
	ccrx -subcommand="src\modbus\functions\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

