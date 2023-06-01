# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror 

# Directories
LIB_DIR = ../lib

# Source files
SRCS = main.c
OBJS = $(SRCS:.c=.o)

# Dependency files
DEPS = $(LIB_DIR)/libmatils.a

# Target executable
TARGET = stat

all: $(TARGET)

$(TARGET): $(OBJS) $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@ -L$(LIB_DIR) -lmatils

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)
