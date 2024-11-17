#include "Queue.h"
#include <iostream>

int main2()
{
    unsigned int size = 5;
    Queue* queue = new Queue;
    initQueue(queue, size);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 5);
    enqueue(queue, 30);
    enqueue(queue, 25);
    enqueue(queue, 25);
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    std::cout << "Dequeued: " << dequeue(queue) << std::endl;
    cleanQueue(queue);
    return 0;
}