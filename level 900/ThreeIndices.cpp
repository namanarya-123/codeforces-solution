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

        bool res = false;

        for(int i=0; i<n; i++)
        {
            if( i+2<n && arr[i+1]>arr[i] && arr[i+2]<arr[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                res = true;
                break;
            }
        }

        if(res == false)
        cout<<"NO"<<endl;

        

    }
    return 0;

}

