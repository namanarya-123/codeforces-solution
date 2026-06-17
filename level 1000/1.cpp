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
        }

        int maxi  = *max_element(arr.begin() , arr.end());

        int md  = 0;

        for(int i=0; i<n; i++)
        {
            md = max(md, maxi - arr[i]);
        }

        cout<<md+1<<endl;

    }
    return 0;

}