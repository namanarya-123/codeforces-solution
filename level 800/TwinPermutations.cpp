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

        vector<int>copy = arr;

        sort(copy.begin(), copy.end());

        int num = copy[0]+copy[n-1];

        for(int i=0; i<n; i++)
        {
            int val = num-arr[i];
            cout<<val<<" ";
        }

        }

    
    return 0;
}

