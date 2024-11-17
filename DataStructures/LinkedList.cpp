#include "LinkedList.h"
#include <iostream>

void AddNode(Node* head, unsigned int newValue)
{
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new Node;
    head->next->value = newValue;
    head->next->next = NULL;
}

unsigned int RemoveNode(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return -1;
    }
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    unsigned int tmp = head->next->value;
    delete head->next;
    head->next = NULL;
    return tmp;
}
