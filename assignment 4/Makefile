# Make file for all files in a directory
# Compiler
CC = gcc

# Compiler flags
CFLAGS = -lm

# Source files (all .c files in the directory)
SRCS = $(wildcard *.c)

# Object files (replace .c with .o for each source file)
OBJS = $(SRCS:.c=.o)

# Target executable names (replace .c with nothing for each source file)
TARGETS = $(SRCS:.c=)

# Rule to build all executables
all: $(TARGETS)

# Rule to build each executable
%: %.c
	$(CC) $< -o $@ $(CFLAGS)

# Rule to clean up all generated files
clean:
	rm -f $(TARGETS) $(OBJS)



## Make file for a specific file in a directory
## Compiler
# CC = gcc

## Compiler flags
# CFLAGS = -lm

## Target name
# TARGET = q3

## Source file
# SRC = q3.c

## Rule to build the program
# $(TARGET): $(SRC)
#	$(CC) $(SRC) -o $(TARGET) $(CFLAGS)

## Rule to clean up generated files
# clean:
#	rm -f $(TARGET)
