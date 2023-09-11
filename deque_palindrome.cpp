#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<char> d;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        d.push_back(str[i]);
    }

    bool equal=true;

    while(d.size()>1 && equal){
        char front_char=d.front();
        d.pop_front();
        char back_char=d.back();
        d.pop_back();

        if(front_char!=back_char){
            equal=false;
        }
    }

    if(equal){
        cout<<"Yes"<<"\n";
    }

    else{
        cout<<"No"<<"\n";
    }
}