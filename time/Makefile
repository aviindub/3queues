BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
LSRC = $(SRC)/LQueue
ASRC = $(SRC)/AQueue
SSRC = $(SRC)/SQueue

CPP = g++
CPPFLAGS = -Wall -Wextra

all: linkedlist_queue_timer array_queue_timer stllist_queue_timer

linkedlist_queue_timer: QueueTimer.cpp $(LSRC)/Queue.o
	$(CPP) $(CFLAGS) -pthread -o linkedlist_queue_timer QueueTimer.cpp $(LSRC)/Queue.o $(LSRC)/Node.o

array_queue_timer: QueueTimer.cpp $(ASRC)/Queue.o
	$(CPP) $(CFLAGS) -pthread -o array_queue_timer QueueTimer.cpp $(ASRC)/Queue.o

stllist_queue_timer: QueueTimer.cpp $(SSRC)/Queue.o
	$(CPP) $(CFLAGS) -pthread -o stllist_queue_timer QueueTimer.cpp $(SSRC)/Queue.o

$(LSRC)/Queue.o: $(LSRC)/Queue.h $(LSRC)/Queue.cpp $(LSRC)/Node.o
	cd $(LSRC); make

$(ASRC)/Queue.o: $(ASRC)/Queue.h $(ASRC)/Queue.cpp
	cd $(ASRC); make

$(SSRC)/Queue.o: $(SSRC)/Queue.h $(SSRC)/Queue.cpp
	cd $(SSRC); make

clean:
	rm -f *queue_timer
	cd $(LSRC); make clean
	cd $(ASRC); make clean
	cd $(SSRC); make clean
