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

        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
        cin>>arr[i];
        arr[i] = pow(2, arr[i]);
        }

        vector<int>pre(n, 0);

        pre[0] = arr[0];


        for(int i=1; i<n; i++)
        {
            pre[i] = arr[i] + pre[i-1];
        }

        vector<int>suf(n, 0);

        suf[n-1] = arr[n-1];

        for(int i=n-2; i>=0; i--)
        {
            suf[i] = arr[i] + suf[i+1];
        }

        set<int>s;;
        for(int i=0; i<n-1; i++)
        {
            s.insert(pre[i]);
        }

        bool found = false;

        for(int i=1; i<n; i++)
        {
           if(s.find(suf[i]) != s.end() )
           {
              found = true;
              cout<<"YES"<<endl;
              break;
           }
        }

        if(found == false)
        cout<<"NO"<<endl;

       

    }
    return 0;

}
