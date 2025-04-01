# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -static -static-libgcc -static-libstdc++ -I./include/

# Linker flags
LDFLAGS = -L./lib/ -lftxui-component -lftxui-dom -lftxui-screen -lncurses

# Source files
SRCS = ./src/main.cpp

# Output executable
TARGET = ./out/main

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

# Clean up build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean
