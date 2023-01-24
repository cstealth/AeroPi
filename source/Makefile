CC := arm-none-eabi-gcc
CONVERT := arm-none-eabi-objcopy
CC_FLAGS := -g -nostartfiles -mfloat-abi=hard -O0 -DRPI3 -mfpu=crypto-neon-fp-armv8 -march=armv8-a+crc -mcpu=cortex-a53
LD_FLAGS :=

SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin
LIB_DIR := lib
INC_DIR := inc

ELF := $(OBJ_DIR)/kernel.elf
IMG := $(BIN_DIR)/kernel.img
SRC := $(wildcard $(SRC_DIR)/*.c)
INC := $(INC_DIR)
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(IMG)

run: clean all
	clear
	@echo "Running..."
	./$(IMG)

$(IMG): $(SRC)
	@echo "Building..."
	@mkdir -p obj
	@mkdir -p bin
	$(CC) $(CC_FLAGS) -I$(INC) -L$(LIB_DIR) $^ -o $(ELF) $(LDFLAGS)
	$(CONVERT) $(ELF) -O binary $(IMG)

clean:
	@echo "Cleaning..."
	-rm $(BIN_DIR)/*
	-rm $(OBJ_DIR)/*
