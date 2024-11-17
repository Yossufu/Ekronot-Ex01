#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
    Stack* s = new Stack;
    initStack(s);
    for (unsigned int i = 0; i < size; i++)
    {
        push(s, nums[i]);
    }
    for (unsigned int i = 0; i < size; i++)
    {
        int value = pop(s);
        if (value != -1)
        {
            nums[i] = value;
        }
    }
    cleanStack(s);
    delete s;
}

int* reverse10()
{
    std::cout << "Enter 10 numbers" << std::endl;
    int* arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }
    reverse(arr, 10);
    return arr;
}
