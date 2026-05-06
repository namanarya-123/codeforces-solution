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

        cout<<1+ 2*(n-1)<< endl;

        cout<<arr[0]<<" ";

        for(int i=1; i<n; i++)
        {
            cout<<arr[i]-1<<" ";
            cout<<arr[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}

