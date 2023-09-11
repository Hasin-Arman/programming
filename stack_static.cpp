#include <bits/stdc++.h>
using namespace std;
const int Max_size = 500;
class Stack
{
public:
    int a[Max_size];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    void push(int val)
    {
        if (stack_size + 1 > Max_size)
        {
            cout << "can't inset!"
                 << "\n";
            return;
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    void pop()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!"
                 << "\n";
            return;
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    int top_element()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack s;
    s.push(3);
    cout << s.top_element() << "\n";
    s.push(4);
    cout << s.top_element() << "\n";
    s.push(5);
    cout << s.top_element() << "\n";
    s.pop();
    cout << s.top_element() << "\n";
    s.pop();
    cout << s.top_element() << "\n";
    s.pop();
    cout << s.top_element() << "\n";
}