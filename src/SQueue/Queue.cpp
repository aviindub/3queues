#include "Queue.h"
#include <iostream>
#include <list>

Queue::Queue(int initialSize) {
//constructor

    std::list<int>* theQueue = new std::list<int>(initialSize);
}

Queue::~Queue() {
//destructor

    delete theQueue;
}

void Queue::enqueue(int value) {
//add to the back of the queue
    theQueue->push_back(value);
}

int Queue::dequeue() {
//remove from the front of the queue
    return theQueue->pop_front();
}

int Queue::size() {
//return the current count of members
    return theQueue->size();
}

bool Queue::isEmpty() {
//return true if queue has zero members
    return theQueue->empty();
}
