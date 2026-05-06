#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        vector<int>arr(x);

        for(int i=0; i<x; i++)
        {
            cin>>arr[i];
        }

        int count=0;
        int dist=0;
        for(int i=0 ; i<x; i++)
        {
            if(arr[i] ==0)
            {
                count++;
                dist = max(dist, count);

            }else{
               count=0;
            }
        }
        cout<<dist<<endl;


       
    }
    return 0;

}