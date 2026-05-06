#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n ;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int x = INT_MAX;

        vector<int>cpy = arr;
        sort(cpy.begin() , cpy.end());

        if(cpy != arr)
        {
           cout<<0<<"\n";
           continue;
        }


        for(int i=1; i<arr.size(); i++)
        {
            x = min(x, arr[i]-arr[i-1]);
        }

        cout<<x/2+1<<"\n";
    }
    return 0;

}