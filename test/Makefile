BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
LSRC = $(SRC)/LQueue
ASRC = $(SRC)/AQueue
SSRC = $(SRC)/SQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: linkedlist_queue_test array_queue_test stllist_queue_test

linkedlist_queue_test: Queue.cpp $(LSRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o linkedlist_queue_test Queue.cpp $(LSRC)/Queue.o $(LSRC)/Node.o $(GTEST_MAINA)

array_queue_test: Queue.cpp $(ASRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o array_queue_test Queue.cpp $(ASRC)/Queue.o $(GTEST_MAINA)

stllist_queue_test: Queue.cpp $(SSRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o stllist_queue_test Queue.cpp $(SSRC)/Queue.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

$(LSRC)/Queue.o: $(LSRC)/Queue.h $(LSRC)/Queue.cpp $(LSRC)/Node.o
	cd $(LSRC); make

$(ASRC)/Queue.o: $(ASRC)/Queue.h $(ASRC)/Queue.cpp
	cd $(ASRC); make

$(SSRC)/Queue.o: $(SSRC)/Queue.h $(SSRC)/Queue.cpp
	cd $(SSRC); make

clean:
	rm -f *queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
	cd $(LSRC); make clean
	cd $(ASRC); make clean
	cd $(SSRC); make clean
