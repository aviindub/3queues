#include "Node.h"

Node::Node(int theValue) {
//constructor
    value = theValue;
}

//Node::~Node() {
//destructor
//}

Node::getNext() {
//return pointer to next node
    return next;
}

Node::setNext(Node* nextNode) {
//set pointer to new node
    next = nextNode;
}
