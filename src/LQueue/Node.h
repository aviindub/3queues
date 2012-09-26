#ifndef __NODE_H__
#define __NODE_H__

class Node {
 private:
  int value;
  Node* next;
  

 public:
  Node(int theValue);
  //~Node();
  void setNext(Node* nextNode);
  Node* getNext();
  int getValue();
};


#endif
