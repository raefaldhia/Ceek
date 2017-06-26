COMPILER = g++
COMPILE_FLAGS = -Wall -Isrc -O3

all: clean
	$(COMPILER) $(COMPILE_FLAGS) $(SRC) -o bin/geekc

clean:
	mkdir -p bin

SRC = \
	src/Main.cpp \
	src/Geek.cpp \
	src/Geek/File.cpp \
	src/Geek/Log.cpp \
	src/Geek/Log/Error.cpp \
	src/Geek/Option.cpp
