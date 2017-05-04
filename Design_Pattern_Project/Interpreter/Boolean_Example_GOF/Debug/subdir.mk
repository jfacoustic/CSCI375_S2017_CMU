################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AndExp.cpp \
../BooleanExp.cpp \
../Constant.cpp \
../Context.cpp \
../NotExp.cpp \
../OrExp.cpp \
../VariableExp.cpp \
../main.cpp 

OBJS += \
./AndExp.o \
./BooleanExp.o \
./Constant.o \
./Context.o \
./NotExp.o \
./OrExp.o \
./VariableExp.o \
./main.o 

CPP_DEPS += \
./AndExp.d \
./BooleanExp.d \
./Constant.d \
./Context.d \
./NotExp.d \
./OrExp.d \
./VariableExp.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


