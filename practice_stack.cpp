#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T(1);
        array_cap = 1;
        stack_size = 0;
    }

    void increase_size()
    {
        T *temp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete[] temp;
        array_cap = array_cap * 2;
    }

    void decrease_size()
    {
        T *temp = new T[array_cap / 2];
        for (int i = 0; i < array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete[] temp;
        array_cap = array_cap / 2;
    }

    void push(T val)
    {
        if (stack_size + 1 > array_cap)
        {
            increase_size();
        }

        if(stack_size < array_cap/2){
            decrease_size();
        }
        
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    void pop()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!" << endl;
            return;
        }
        stack_size = stack_size - 1;
    }

    T top()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty!" << endl;
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double> s;
    s.push(1.8);
    cout << s.top() << endl;
    s.push(2.1);
    cout << s.top() << endl;
    s.push(3.2);
    cout << s.top() << endl;
    s.push(4.6);
    s.pop();
    cout << s.top();
}