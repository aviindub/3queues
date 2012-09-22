#include "gtest/gtest.h"
#include "../src/Queue.h"

TEST(QueueTest, Enqueue) {
  Queue* s = new Queue();
  s->enqueue(6);

  EXPECT_EQ(6, s->dequeue());
  delete s;
}


TEST(QueueTest, Resize) {
    Queue* s = new Queue();
    for (int i = 0; i <= 24; i++) {
        s->enqueue(i);
    }
    EXPECT_EQ(24, s->size());
    EXPECT_EQ(0, s->dequeue());
    EXPECT_EQ(1, s->dequeue());
    EXPECT_EQ(2, s->dequeue());
    delete s;
}
