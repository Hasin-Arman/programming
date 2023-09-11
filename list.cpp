#include<bits/stdc++.h>

using namespace std;

void print(list<int> list){
    auto it = list.begin();

    while(it != list.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
}

int getValue(list<int>l, int index){
    auto it =l.begin();
    advance(it,index);
    return *it;;
}

void Insert(list<int> &l, int index, int val){
    auto it = l.begin();
    advance(it,index);
    l.insert(it,val);
}

bool search(list<int> &l,int value){
    auto it = l.begin();
    while(it != l.end()){
        if(*it==value){
            return true;
        }
        it++;
    }
    return false;
}

void deleteZero(list<int> &l){
    l.remove(0);
}

void delete_index(list<int> &l, int index){
    auto it = l.begin();
    advance(it,index);
    l.erase(it);
}



int main(){
    list<int> l;

    l.push_back(0);
    l.push_back(0);
    l.push_back(3);
    l.push_back(0);
    l.push_back(5);
    print(l);
    deleteZero(l);
    print(l);
    //cout<<search(l,13);
    // cout<<getValue(l,1)<<endl;
    // cout<<"list size:"<<l.size()<<"\n";



}