#include "stack.h"  //包含头文件
#include <iostream> //push和pop都用到了cout，所以包含此头文件
using namespace std;

Stack::Stack(int stacksize)
{
    if (stacksize > 0)
    {
        size = stacksize;
        arr = new int[stacksize];
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }
    else
    {
        arr = 0;
        size = 0;
    }
    cur = 0;
}
Stack::~Stack() { delete[] arr; }
void Stack::push(int x)
{
    if (cur < size)
    {
        arr[cur] = x;
        cur++;
    }
    else
    {
        cout << "堆栈已满，不能再压入数据: " << x << endl;
    }
}
int Stack::pop()
{
    if (cur <= 0)
    {
        cout << "堆栈已空!" << endl;
        exit(1); //堆栈操作失败，退出程序！
    }
    cur--;
    return arr[cur];
}

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(12);
    s1.push(32);
    int x1 = s1.pop();
    int x2 = s1.pop();
    int x3 = s1.pop();
    cout << x1 << "\t" << x2 << "\t" << x3 << endl;
    return 0;
}
