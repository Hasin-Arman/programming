#include <bits/stdc++.h>

using namespace std;

int precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    stack<char> s;
    string str;
    cin >> str;
    string result = "";
    for (int i = 0; i < str.size(); i++)
    {
        char now = str[i];
        if (now >= '0' && now <= '9')
        {
            result += now;
        }
        else if (now == '(')
        {
            s.push(now);
        }

        else if (now == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }

        else
        {
            while (s.size() > 0 && s.top() != '(' && precedence(now) <= precedence(s.top()))
            {
                result = result + s.top();
                s.pop(); //(a+b)*(c+d)
            }
            s.push(now);
        }
    }
    while (s.size() > 0)
    {
        result = result + s.top();
        s.pop();
    }
    cout<<result<<endl;
    stack<int> nums;
    for (int i = 0; i < result.size(); i++)
    {
        char now = result[i];

        if (now >= '0' && now <= '9')
        {
            int num = (int) (now-'0');
            nums.push(num);
        }

        else
        {
            int op1 = nums.top();
            nums.pop();
            int op2 = nums.top();
            nums.pop();

            if (now == '+')
            {
                nums.push(op2 + op1);
            }

            else if (now == '-')
            {
                nums.push(op2 - op1);
            }

            else if (now == '*')
            {
                nums.push(op2 * op1);
            }
            else
            {
                nums.push(op2 / op1);
            }
        }
    }
    cout<<nums.top()<<endl;
}