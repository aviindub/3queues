#include "gtest/gtest.h"
#include "../src/Queue.h"

TEST(QueueTest, EnqueueDequeue) {
    Queue* q = new Queue();
    q->enqueue(6);

    EXPECT_EQ(6, q->dequeue());
    delete q;
}

TEST(QueueTest, Size) {

    Queue* q = new Queue();
    for (int i = 0; i < 5; i++) {
        q->enqueue(i);
    }
    
    EXPECT_EQ(5, q->size());
}

TEST(QueueTest, Resize) {
    Queue* q = new Queue();
    for (int i = 0; i <= 24; i++) {
        q->enqueue(i);
    }
    EXPECT_EQ(24, q->size());
    EXPECT_EQ(0, q->dequeue());
    EXPECT_EQ(1, q->dequeue());
    EXPECT_EQ(2, q->dequeue());
    delete q;
}
