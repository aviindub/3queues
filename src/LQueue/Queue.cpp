#include "Queue.h"
#include <iostream>
#include <assert.h>
#include "Node.h"

Queue::Queue() {
//constructor
    front = 0;
    back = 0;
    memberCount = 0;
}

Queue::~Queue() {
//destructor
    while(!isEmpty()){
        dequeue();
    }
}

void Queue::enqueue(int value) {
//add to the back of the queue
    Node* newNode = new Node(value);
    if (back != 0) {
        back->setNext(newNode);
    }
    back = newNode;
    memberCount++;
}

int Queue::dequeue() {
//remove from the front of the queue
    assert(!isEmpty());
    int value = front->getValue();
    Node* currFront = front;
    front = currFront->getNext();
    delete currFront;
    memberCount--;
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
