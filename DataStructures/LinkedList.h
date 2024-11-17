#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    unsigned int value;
    Node* next;
};

void AddNode(Node* head, unsigned int newValue);
unsigned int RemoveNode(Node* head);

#endif /* LINKEDLIST_H */
