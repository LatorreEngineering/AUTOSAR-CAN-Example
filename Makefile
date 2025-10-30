# Compiler
CC = gcc
CFLAGS = -Wall -Iinclude

# Source files
SRC = src/main.c \
      src/can_driver.c \
      src/can_if.c \
      src/swc_temperature_monitor.c

# Output executable
TARGET = autosar_can_example

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
