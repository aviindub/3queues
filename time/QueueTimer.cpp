#include <iostream>
#include "../src/AQueue/Queue.h"
#include <ctime>

int main () {
    int start, end, elapsed;
    double seconds;
    Queue* q = new Queue();
    
    //enqueue / dequeue 100,000
    start = clock();    
    for (unsigned long i = 0; i < 100000; i++) {
        q->enqueue(i);
    }
    for (unsigned long i = 0; i < 100000; i++) {
        q->dequeue();
    }
    end = clock();
    elapsed = end - start;
    seconds = (double) elapsed/CLOCKS_PER_SEC;
    std::cout << "total time for 100,000 enque/dequeues is " << seconds << " seconds." << std::endl;
    
    //enqueue / dequeue 1,000,000
    start = clock();    
    for (unsigned long i = 0; i < 1000000; i++) {
        q->enqueue(i);
    }
    for (unsigned long i = 0; i < 1000000; i++) {
        q->dequeue();
    }
    end = clock();
    elapsed = end - start;
    seconds = (double) elapsed/CLOCKS_PER_SEC;
    std::cout << "total time for 1,000,000 enque/dequeues is " << seconds << " seconds." << std::endl;

    //enqueue / dequeue 10,000,000    
    start = clock();    
    for (unsigned long i = 0; i < 10000000; i++) {
        q->enqueue(i);
    }
    for (unsigned long i = 0; i < 10000000; i++) {
        q->dequeue();
    }
    end = clock();
    elapsed = end - start;
    seconds = (double) elapsed/CLOCKS_PER_SEC;
    std::cout << "total time for 10,000,000 enque/dequeues is " << seconds << " seconds." << std::endl;

    //enqueue / dequeue 20,000,000    
    start = clock();    
    for (unsigned long i = 0; i < 20000000; i++) {
        q->enqueue(i);
    }
    for (unsigned long i = 0; i < 20000000; i++) {
        q->dequeue();
    }
    end = clock();
    elapsed = end - start;
    seconds = (double) elapsed/CLOCKS_PER_SEC;
    std::cout << "total time for 20,000,000 enque/dequeues is " << seconds << " seconds." << std::endl;

    return 0;
}
