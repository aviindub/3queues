BUILD = ./build
TEST = ./test
TIME = ./time
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: unit_tests time_tests

unit_tests: 
	cd $(TEST); $(MAKE) all

time_tests:
	cd $(TIME); $(MAKE) all

clean:
	cd $(TEST); $(MAKE) clean
	cd $(TIME); $(MAKE) clean
