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

user: 
	$(CC)  src/user.cpp $(WARNING_FLAGS) $(CPP_FLAGS) $(LIBS) -o $(BUILD_DIR)/user
gtk:
	g++ src/gtk_basic.cpp -o simple `pkg-config gtkmm-4.0 --cflags --libs`

run: 
	./$(BUILD_DIR)/BookShelf

clean:
	rm -rf $(BUILD_DIR)
