#pragma once
class Stack
{
private:
    int cur = 0;
    int size = 10;
    int *arr; //因为输入数据的大小是不确定的，所以要用动态分配，那么就要用到指针

public:
    Stack(int size = 10);
    ~Stack();
    void push(int data);
    int pop();
};
