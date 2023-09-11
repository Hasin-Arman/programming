#include<bits/stdc++.h>
using namespace std;
void print(list<int> list){
    auto it = list.begin();
    while(it != list.end()){
        cout<<*it <<" ";
        it++;
    }
    cout<<"\n";
}

int get_index(list<int> & l , int value){
    auto it=l.begin();
    int current_index=0;
    while(it != l.end()){
        if(*it==value){
            return current_index;
        }
        it++;
        current_index++;
    }
}

void deleteValue(list<int> & l , int index){
    auto it = l.begin();
    advance(it,index);
    l.erase(it);
}

int main(){
    list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    print(l);
    deleteValue(l,get_index(l,4));
    print(l);
}