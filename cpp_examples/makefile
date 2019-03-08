#
# This is a simple makefile for this dummy project
#
CC := gcc
SRCDIR := src
BUILDER := build
TARGET := bin/runner

SRCTEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCTEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g
INC := -I include

$(TARGET): $(OBJECTS)
	@echo " Linking... "
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)
