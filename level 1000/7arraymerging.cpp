#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
       int n;
       cin>>n;

       vector<int>a(n);
       vector<int>b(n);

       for(int i=0; i<n; i++)
       {
        cin>>a[i];
        cin>>b[i];
       }

       map<int, int>m;

       for(int i=0; i<n; i++)
       {
        m[a[i]]++;
        m[b[i]]++;
       }

       int ans = 0;
       for(auto it= m.begin(); it!= m.end(); it++)
       {
         ans = max(ans, it->second);
       }

       cout<<ans<<endl;


    }
    return 0;

}


