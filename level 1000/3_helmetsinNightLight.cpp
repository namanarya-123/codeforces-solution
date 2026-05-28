#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n , cost ;
        cin>>n >> cost;

        vector<int>arr(n);
        vector<int>val(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>val[i];
        }

        vector<pair<int, int>>p;
        for(int i=0; i<n; i++)
        {
            p.push_back({val[i] , arr[i]});
        }

        sort(p.begin(), p.end(), [&]( pair<int, int>&a, pair<int, int>&b)
    {
           if(a.first == b.first)
           return a.second > b.second;

           return a.first < b.first;
    });

       for(int i=0; i<n; i++)
       {
         val[i] = p[i].first;
         arr[i] = p[i].second;
       }

       long long ans = cost;

       int res = 1;

       for(int i=0; i<n; i++)
       {
           if(val[i]>cost)
           break;

           ans+= ( 1LL*val[i]*min(arr[i], n-res));
           res+=(min(arr[i], n-res));
       }

       ans+=( 1LL*(n-res)*cost);
       cout<<ans<<endl;

    }
    return 0;

}