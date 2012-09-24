#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
//constructor
    initialSize = 10;
    theQueue = new int[initialSize];
    arraySize = initialSize;
    memberCount = 0;
    front = 0;
    back = 0;
}

Queue::~Queue() {
//destructor
    delete[] theQueue;
}

void Queue::enqueue(int value) {
//add to the back of the queue
    if (memberCount == arraySize) {
        //double size of array
        resizeArray(arraySize * 2);
    }
    //add to back
    theQueue[back] = value;
    back++;
    memberCount++;
    if (back == arraySize) {
        back = 0;
    }
}

int Queue::dequeue() {
//remove from the front of the queue
    assert(memberCount > 0);
    int value = theQueue[front];
    front++;
    memberCount--;
    if (memberCount < arraySize / 4 && arraySize > initialSize) {
        if (arraySize / 2 > initialSize) {
            //halve size of array
            resizeArray(arraySize / 2);
        } else {
            //resize to initialSize
            resizeArray(initialSize);
        }
    }
    return value;
}

int Queue::size() {
//return the current count of members
    return memberCount;
}

bool Queue::isEmpty() {
//return true if queue has zero members
    if (memberCount == 0) {
        return true;
    } else {
        return false;
    }
}
        
void Queue::resizeArray(int newSize) {
    arraySize = newSize;
    int* newArray = new int[arraySize];
    for (int i = 0; i < memberCount; i++) {
        newArray[i] = theQueue[(i + front) % memberCount];
    }
    front = 0;
    back = memberCount;
    int* arrayToDelete = theQueue;
    theQueue = newArray;
    delete arrayToDelete;
}
