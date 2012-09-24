#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  int* theQueue;
  int front;
  int back;
  int memberCount;
  int arraySize;
  int initialSize;
  void resizeArray(int newSize);
  

 public:
  Queue();
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};


#endif
