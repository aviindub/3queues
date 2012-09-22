#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  std::list<int> theQueue;
  int front;
  int back;
  

 public:
  Queue(int initialSize = 10);
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int size();
  bool isEmpty();
};


#endif
