#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
    AddNode(s->head, element);
}

int pop(Stack* s)
{
    if (isEmpty(s))
    {
        return -1;
    }
    return RemoveNode(s->head);
}

void initStack(Stack* s)
{
    s->head = new Node;
    s->head->next = NULL;// the first head is for placement only? (im not sure how to describe it)
}

void cleanStack(Stack* s)
{
    while (!isEmpty(s))
    {
        pop(s);
    }
    delete s->head;
    s->head = NULL;
}

bool isEmpty(Stack* s)
{
    return s->head->next == NULL;
}
