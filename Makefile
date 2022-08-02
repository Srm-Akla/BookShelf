CC=g++
BUILD_DIR=build
WARNING_FLAGS=-Wall -Weffc++ -Wextra -Wsign-conversion
CPP_FLAGS=-std=gnu++17 -Iinc
INCLUDE_FILES=inc/main.hpp
SOURCE_FILES=src/main.cpp

all: build
	$(CC) $(SOURCE_FILES) $(WARNING_FLAGS) $(CPP_FLAGS) $(LIBS) -o $(BUILD_DIR)/BookShelf

build:
	mkdir $(BUILD_DIR)

run: 
	./$(BUILD_DIR)/BookShelf

clean:
	rm -rf $(BUILD_DIR)
