BUILD = ../../build/LQueue
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp Queue.o Node.o

Queue.o: Queue.h Queue.cpp Node.o
	$(CPP) $(CPPFLAGS) -c Queue.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
