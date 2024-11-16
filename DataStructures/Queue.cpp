#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    q->queue = new unsigned int[size];
    q->count = 0;
    q->maxSize = size;
}

void cleanQueue(Queue* q)
{
    delete[] q->queue;
    delete q;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (!isFull(q))
    {
        unsigned int* temp = new unsigned int[q->count + 1];
        std::copy(q->queue, q->queue + q->count, temp); // Copy current elements to the new array (found the function online)
        temp[q->count] = newValue;
        delete[] q->queue;
        q->queue = temp;
        q->count++;
    }
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    unsigned int temp = q->queue[0];
    q->count--;
    unsigned int* tmp = new unsigned int[q->count];
    for (unsigned int i = 0; i < q->count; i++)
    {
        tmp[i] = q->queue[i + 1];
    }
    delete[] q->queue;
    q->queue = tmp;
    return temp;
}

bool isEmpty(Queue* q)
{
    return q->count == 0;
}

bool isFull(Queue* q)
{
    return q->count == q->maxSize;
}
