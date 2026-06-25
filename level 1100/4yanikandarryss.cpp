#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
     long long t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);

        for(int i=0; i<n; i++)
        cin>>arr[i];

        int cs = INT_MIN;
        int ms = INT_MIN;

        cs = arr[0];
        ms = arr[0];

        for(int i=1; i<n; i++)
        {
            if(abs(arr[i])%2 != abs(arr[i-1])%2)
            {
                cs = max(arr[i], arr[i]+cs);
                ms = max(cs, ms);
            }else{
                cs = 0;
                cs = max(arr[i], arr[i]+cs);
                ms = max(cs, ms);
            }
        }

        cout<<ms<<endl;
    }
    return 0;

}
