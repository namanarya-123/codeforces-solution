#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    
        ll n, q;
        cin>>n >>q;
        vector<ll>arr(n);
        vector<ll>que(q);

        for(int i=0; i<n; i++)
        cin>>arr[i];

        for(int i=0; i<q; i++)
        cin>>que[i];

        unordered_map<ll , ll>m;

        for(int i=0; i<n; i++)
        {
            if(m.find(arr[i]) == m.end())
            m[arr[i]] = i;
        }

        vector<ll>ans(q);
        for(int i=0; i<q; i++)
        {
            ll pos = m[que[i]];
            ans[i] = pos+1;

            for(auto it= m.begin(); it!= m.end(); it++)
            {
                ll pose = it->second;

                if(pose < pos)
                {
                    m[it->first] = it->second+1;
                }
            }

            m[que[i]] = 0;
        }

        for(int i=0;i<q; i++)
        {
            cout<<ans[i]<<" ";
        }
    
    return 0;

}
