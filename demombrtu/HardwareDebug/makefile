################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf *.sni *.dbg *.lst *.lis *.lpp *.map *.x *.lbp *.bls *.libelf *.rel *.lbk *.abs *.mi *.jmp *.fsy *.ud *.udm 1st/*.abs 1st/*.jmp 1st/*.fsy

# All of the sources participating in the build are defined here
-include sources.mk
-include src/smc_gen/r_bsp/mcu/rx130/subdir.mk
-include src/smc_gen/Config_PORT/subdir.mk
-include src/modbus/subdir.mk
-include src/modbus/modebus_port/subdir.mk
-include src/modbus/tcp/subdir.mk
-include src/modbus/rtu/subdir.mk
-include src/smc_gen/Config_SCI12/subdir.mk
-include src/smc_gen/r_bsp/mcu/all/subdir.mk
-include src/smc_gen/r_gpio_rx/src/subdir.mk
-include src/smc_gen/r_bsp/board/generic_rx130/subdir.mk
-include src/smc_gen/general/subdir.mk
-include src/smc_gen/Config_CMT0/subdir.mk
-include src/modbus/ascii/subdir.mk
-include src/modbus/functions/subdir.mk
-include src/smc_gen/r_gpio_rx/src/targets/rx130/subdir.mk
-include src/subdir.mk
-include src/smc_gen/r_pincfg/subdir.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif 
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif 
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif 
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif 
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif 
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif 
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif 
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif 
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif 
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif 
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif 
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif 
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif 
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif 
endif

ifneq ($(strip $(SRC_UPPER_SRCS)),)
ALL_ASMS += $(SRC_UPPER_SRCS) 
endif
ifneq ($(strip $(SRC_SRCS)),)
ALL_ASMS += $(SRC_SRCS) 
endif
ifneq ($(strip $(S_UPPER_SRCS)),)
ALL_ASMS += $(S_UPPER_SRCS) 
endif
ifneq ($(strip $(S_SRCS)),)
ALL_ASMS += $(S_SRCS) 
endif


-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
LINKER_OUTPUT_OUTPUTS += \
demombrtu.abs

LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \
demombrtu.lib

CONVERTOR_OUTPUT_OUTPUTS += \
demombrtu.mot demombrtu.bin

OBJS := \
$(COMPILER_OBJS) \
$(INDIVIDUAL_COMPILER_OBJS) \
$(ASSEMBLER_OBJS) \
$(CUSTOM_OBJS)

# All Target
all: $(CONVERTOR_OUTPUT_OUTPUTS) demombrtu.x demombrtu.udm

	@echo 'Build complete.'

%.mot %.bin: $(LINKER_OUTPUT_OUTPUTS) Converter.sub
	@echo 'Invoking: Converter'
	@echo 'Building target:'
	@echo Converterdemombrtu.tmp=
	@sed -e "s/^/    /" "Converterdemombrtu.tmp"
	rlink -subcommand="Converterdemombrtu.tmp"
	@echo 'Finished building target:'
	@echo ''


demombrtu.abs: $(OBJS)  $(ALL_ASMS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) 
	@echo 'Invoking: Linker'
	@echo Linkerdemombrtu.tmp=
	@sed -e "s/^/    /" "Linkerdemombrtu.tmp"
	rlink -subcommand="Linkerdemombrtu.tmp"
	@echo 'Finished building:'
	@echo ''


demombrtu.lib: 
	@echo 'Invoking: Library Generator'
	@echo LibraryGeneratordemombrtu.tmp=
	@sed -e "s/^/    /" "LibraryGeneratordemombrtu.tmp"
	lbgrx -subcommand="LibraryGeneratordemombrtu.tmp"
	@echo 'Finished building:'
	@echo ''

demombrtu.x: demombrtu.abs
		-C:\Users\mobifone\.eclipse\com.renesas.platform_1223251604\Utilities\\ccrx\renesas_cc_converter demombrtu.abs demombrtu.x

demombrtu.udm: $(LINKER_OUTPUT_OUTPUTS) $(CONVERTOR_OUTPUT_OUTPUTS)
	udcollector -subcommand=udSubcommand.tmp -output=demombrtu.udm

# Other Targets
clean:
	-$(RM) $(LINKER_OUTPUT_OUTPUTS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(CONVERTOR_OUTPUT_OUTPUTS)
ifneq ($(strip $(OBJS)),)
	-$(file > clean_OBJS.tmp, $(OBJS))
	-@xargs -s 4000 -t -a clean_OBJS.tmp rm -rf
	-@rm -rf clean_OBJS.tmp
endif
ifneq ($(strip $(C_DEPS)),)
	-$(file > clean_C_DEPS.tmp, $(C_DEPS))
	-@xargs -s 4000 -t -a clean_C_DEPS.tmp rm -rf
	-@rm -rf clean_C_DEPS.tmp
endif
ifneq ($(strip $(CPP_DEPS)),)
	-$(file > clean_CPP_DEPS.tmp, $(CPP_DEPS))
	-@xargs -s 4000 -t -a clean_CPP_DEPS.tmp rm -rf
	-@rm -rf clean_CPP_DEPS.tmp
endif
ifneq ($(strip $(ASM_DEPS)),)
	-$(file > clean_ASM_DEPS.tmp, $(ASM_DEPS))
	-@xargs -s 4000 -t -a clean_ASM_DEPS.tmp rm -rf
	-@rm -rf clean_ASM_DEPS.tmp
endif
ifneq ($(strip $(DSP_DEPS)),)
	-$(file > clean_DSP_DEPS.tmp, $(DSP_DEPS))
	-@xargs -s 4000 -t -a clean_DSP_DEPS.tmp rm -rf
	-@rm -rf clean_DSP_DEPS.tmp
endif
	-rm -rf src/smc_gen/r_bsp/mcu/rx130/*.asm src/smc_gen/r_bsp/mcu/rx130/*.p src/smc_gen/r_bsp/mcu/rx130/*.pp src/smc_gen/r_bsp/mcu/rx130/*.src src/smc_gen/r_bsp/mcu/rx130/*.jmp src/smc_gen/r_bsp/mcu/rx130/*.lst src/smc_gen/r_bsp/mcu/rx130/*.prn src/smc_gen/r_bsp/mcu/rx130/*.i src/smc_gen/r_bsp/mcu/rx130/*.ud 
	-rm -rf src/smc_gen/Config_PORT/*.asm src/smc_gen/Config_PORT/*.p src/smc_gen/Config_PORT/*.pp src/smc_gen/Config_PORT/*.src src/smc_gen/Config_PORT/*.jmp src/smc_gen/Config_PORT/*.lst src/smc_gen/Config_PORT/*.prn src/smc_gen/Config_PORT/*.i src/smc_gen/Config_PORT/*.ud 
	-rm -rf src/modbus/*.asm src/modbus/*.p src/modbus/*.pp src/modbus/*.src src/modbus/*.jmp src/modbus/*.lst src/modbus/*.prn src/modbus/*.i src/modbus/*.ud 
	-rm -rf src/modbus/modebus_port/*.asm src/modbus/modebus_port/*.p src/modbus/modebus_port/*.pp src/modbus/modebus_port/*.src src/modbus/modebus_port/*.jmp src/modbus/modebus_port/*.lst src/modbus/modebus_port/*.prn src/modbus/modebus_port/*.i src/modbus/modebus_port/*.ud 
	-rm -rf src/modbus/tcp/*.asm src/modbus/tcp/*.p src/modbus/tcp/*.pp src/modbus/tcp/*.src src/modbus/tcp/*.jmp src/modbus/tcp/*.lst src/modbus/tcp/*.prn src/modbus/tcp/*.i src/modbus/tcp/*.ud 
	-rm -rf src/modbus/rtu/*.asm src/modbus/rtu/*.p src/modbus/rtu/*.pp src/modbus/rtu/*.src src/modbus/rtu/*.jmp src/modbus/rtu/*.lst src/modbus/rtu/*.prn src/modbus/rtu/*.i src/modbus/rtu/*.ud 
	-rm -rf src/smc_gen/Config_SCI12/*.asm src/smc_gen/Config_SCI12/*.p src/smc_gen/Config_SCI12/*.pp src/smc_gen/Config_SCI12/*.src src/smc_gen/Config_SCI12/*.jmp src/smc_gen/Config_SCI12/*.lst src/smc_gen/Config_SCI12/*.prn src/smc_gen/Config_SCI12/*.i src/smc_gen/Config_SCI12/*.ud 
	-rm -rf src/smc_gen/r_bsp/mcu/all/*.asm src/smc_gen/r_bsp/mcu/all/*.p src/smc_gen/r_bsp/mcu/all/*.pp src/smc_gen/r_bsp/mcu/all/*.src src/smc_gen/r_bsp/mcu/all/*.jmp src/smc_gen/r_bsp/mcu/all/*.lst src/smc_gen/r_bsp/mcu/all/*.prn src/smc_gen/r_bsp/mcu/all/*.i src/smc_gen/r_bsp/mcu/all/*.ud 
	-rm -rf src/smc_gen/r_gpio_rx/src/*.asm src/smc_gen/r_gpio_rx/src/*.p src/smc_gen/r_gpio_rx/src/*.pp src/smc_gen/r_gpio_rx/src/*.src src/smc_gen/r_gpio_rx/src/*.jmp src/smc_gen/r_gpio_rx/src/*.lst src/smc_gen/r_gpio_rx/src/*.prn src/smc_gen/r_gpio_rx/src/*.i src/smc_gen/r_gpio_rx/src/*.ud 
	-rm -rf src/smc_gen/r_bsp/board/generic_rx130/*.asm src/smc_gen/r_bsp/board/generic_rx130/*.p src/smc_gen/r_bsp/board/generic_rx130/*.pp src/smc_gen/r_bsp/board/generic_rx130/*.src src/smc_gen/r_bsp/board/generic_rx130/*.jmp src/smc_gen/r_bsp/board/generic_rx130/*.lst src/smc_gen/r_bsp/board/generic_rx130/*.prn src/smc_gen/r_bsp/board/generic_rx130/*.i src/smc_gen/r_bsp/board/generic_rx130/*.ud 
	-rm -rf src/smc_gen/general/*.asm src/smc_gen/general/*.p src/smc_gen/general/*.pp src/smc_gen/general/*.src src/smc_gen/general/*.jmp src/smc_gen/general/*.lst src/smc_gen/general/*.prn src/smc_gen/general/*.i src/smc_gen/general/*.ud 
	-rm -rf src/smc_gen/Config_CMT0/*.asm src/smc_gen/Config_CMT0/*.p src/smc_gen/Config_CMT0/*.pp src/smc_gen/Config_CMT0/*.src src/smc_gen/Config_CMT0/*.jmp src/smc_gen/Config_CMT0/*.lst src/smc_gen/Config_CMT0/*.prn src/smc_gen/Config_CMT0/*.i src/smc_gen/Config_CMT0/*.ud 
	-rm -rf src/modbus/ascii/*.asm src/modbus/ascii/*.p src/modbus/ascii/*.pp src/modbus/ascii/*.src src/modbus/ascii/*.jmp src/modbus/ascii/*.lst src/modbus/ascii/*.prn src/modbus/ascii/*.i src/modbus/ascii/*.ud 
	-rm -rf src/modbus/functions/*.asm src/modbus/functions/*.p src/modbus/functions/*.pp src/modbus/functions/*.src src/modbus/functions/*.jmp src/modbus/functions/*.lst src/modbus/functions/*.prn src/modbus/functions/*.i src/modbus/functions/*.ud 
	-rm -rf src/smc_gen/r_gpio_rx/src/targets/rx130/*.asm src/smc_gen/r_gpio_rx/src/targets/rx130/*.p src/smc_gen/r_gpio_rx/src/targets/rx130/*.pp src/smc_gen/r_gpio_rx/src/targets/rx130/*.src src/smc_gen/r_gpio_rx/src/targets/rx130/*.jmp src/smc_gen/r_gpio_rx/src/targets/rx130/*.lst src/smc_gen/r_gpio_rx/src/targets/rx130/*.prn src/smc_gen/r_gpio_rx/src/targets/rx130/*.i src/smc_gen/r_gpio_rx/src/targets/rx130/*.ud 
	-rm -rf src/*.asm src/*.p src/*.pp src/*.src src/*.jmp src/*.lst src/*.prn src/*.i src/*.ud 
	-rm -rf src/smc_gen/r_pincfg/*.asm src/smc_gen/r_pincfg/*.p src/smc_gen/r_pincfg/*.pp src/smc_gen/r_pincfg/*.src src/smc_gen/r_pincfg/*.jmp src/smc_gen/r_pincfg/*.lst src/smc_gen/r_pincfg/*.prn src/smc_gen/r_pincfg/*.i src/smc_gen/r_pincfg/*.ud 
	@echo ''
	@echo 'Clean complete.'

.PHONY: all clean  
-include ../makefile.targets