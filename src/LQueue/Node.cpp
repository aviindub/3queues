#include "Node.h"

Node::Node(int theValue) {
//constructor
    value = theValue;
    next = 0;
}

//Node::~Node() {
//destructor
//}

Node* Node::getNext() {
//return pointer to next node
    return next;
}

void Node::setNext(Node* nextNode) {
//set pointer to new node
    next = nextNode;
}

int Node::getValue() {
    return value;
}
