BUILD = ../../build/SQueue
CPP = g++
CPPFLAGS = -Wall -Wextra

main: stack_tester.cpp Stack.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main stack_tester.cpp Stack.o

Stack.o: Stack.h Stack.cpp
	$(CPP) $(CPPFLAGS) -c Stack.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
