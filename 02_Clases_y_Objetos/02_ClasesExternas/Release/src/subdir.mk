################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ClasesExternas.cpp \
../src/Estudiante.cpp \
../src/Perro.cpp \
../src/Persona.cpp 

OBJS += \
./src/ClasesExternas.o \
./src/Estudiante.o \
./src/Perro.o \
./src/Persona.o 

CPP_DEPS += \
./src/ClasesExternas.d \
./src/Estudiante.d \
./src/Perro.d \
./src/Persona.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


