BUILD = ../../build/AQueue
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp Queue.o

Queue.o: Queue.h Queue.cpp
	$(CPP) $(CPPFLAGS) -c Queue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
