#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
   
        int n, k;
        cin>> n>>k;

        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        bool flag = false;

        for(int i=0; i<n; i++)
        {
            if(arr[i] == k)
            {
                flag = true;
                cout<<"yes"<<"\n";
                break;
            }
        }

        if(!flag)
        {
          cout<<"no"<<"\n";
        }

        
    }

    return 0;
}