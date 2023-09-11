#include <bits/stdc++.h>
using namespace std;

vector<int>coins;

int coin_change(int n)
{
    if(n==0)
        return 0;

    int ans = 100000000;
    for(int i=0; i<coins.size(); i++)
    {
        if(n>=coins[i])
        {
            ans = min(ans, 1+coin_change(n-coins[i]) );
        }
    }
    return ans;
}

int main()
{
    int n;
    int k,x;
    cin>> n >> k;
    cout<<"n="<<n<<" "<<"k="<<k<<endl;
    for(int i = 0; i < n; i++){
        cin>>x;
        coins.push_back(x);
        
    }
    cout<<coin_change(k)<<"\n";

    return 0;
}
