#include "Queue.h"
#include <iostream>
#include <list>
#include <assert.h>

Queue::Queue() {
//constructor
    theQueue = new std::list<int>();
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
    assert(!isEmpty());
    int frontValue = theQueue->front();
    theQueue->pop_front();
    return frontValue;
}

int Queue::size() {
//return the current count of members
    return theQueue->size();
}

bool Queue::isEmpty() {
//return true if queue has zero members
    return theQueue->empty();
}
