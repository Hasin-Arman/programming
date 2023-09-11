#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int n;
bool solution_found(int id,vector<int>state){
    if(id==n){
        return true;
    }
    else{
        return false;
    }

}
vector<int> get_candidates(vector<int> state){
    map<int,int>taken;
    for(int x:state){
        taken[x]=1;
    }
    vector<int> candidates;
    for(int i=1;i<=n;i++){
        if(taken[i]==0){
            candidates.push_back(i);
        }
    }
    return candidates;
}
void backtrack(int id,vector<int>state){
    //base case handling
    if(solution_found(id,state)){
        ans.push_back(state);
        return;
    }
    vector<int> candidates=get_candidates(state);
    //loop through the valid candidates
    for(int candidate:candidates){
        //add candidate to state
        state[id]=candidate;
        // backtrack(state)
        backtrack(id+1,state);
        //remove candidate from state
        state[id]=0;
    }
}

int main(){
    cin >> n;
    vector<int> initial_state(n);
    backtrack(0,initial_state);
    for(auto permutation : ans){
        for(int x:permutation){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}