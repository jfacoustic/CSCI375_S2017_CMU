################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Controller.cpp \
../Game.cpp \
../Reader.cpp \
../RobotController.cpp \
../UserController.cpp \
../main.cpp 

OBJS += \
./Controller.o \
./Game.o \
./Reader.o \
./RobotController.o \
./UserController.o \
./main.o 

CPP_DEPS += \
./Controller.d \
./Game.d \
./Reader.d \
./RobotController.d \
./UserController.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


