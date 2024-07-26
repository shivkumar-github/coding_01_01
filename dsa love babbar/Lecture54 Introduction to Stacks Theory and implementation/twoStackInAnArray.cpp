#include <bits/stdc++.h>
class TwoStack
{
    // array to implement stack
    int *array;

    // indices of two stacks
    int top1 = -1, size, top2;

public:
    TwoStack(int s)
    {
        this->size = s;
        top2 = size;

        // creating array dynamically
        array = new int[size];
    }

    void push1(int num)
    {
        // push only if stack is not oveflowed
        if (top2 > top1 + 1)
            array[++top1] = num;
        // else do nothing
    }

    void push2(int num)
    {
        // push only if stack is not oveflowed
        if (top2 > top1 + 1)
            array[--top2] = num;
        // else do nothing
    }

    int pop1()
    {
        // if stack empty
        if (top1 < 0)
            return -1;

        // else pop
        return array[top1--];
    }
    int pop2()
    {
        // if stack empty
        if (top2 >= size)
            return -1;
        // else pop
        return array[top2++];
    }
};
