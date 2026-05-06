#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int sum=0;
        for(int i=0;i<n; i++)
        {
            sum+=arr[i];

        }

        if(sum%2 ==0)
        cout<<"yes"<<"\n";
        else
        cout<<"no"<<"\n";
    }

    return 0;
}