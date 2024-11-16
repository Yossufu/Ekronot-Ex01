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

void RemoveNode(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    delete head->next;
    head->next = NULL;
}
