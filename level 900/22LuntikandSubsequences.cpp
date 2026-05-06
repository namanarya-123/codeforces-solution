#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>>dp;



int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long sum=0;
        vector<long long>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        sum--;

        int c0 =0;
        int c1 =0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
            c0++;

            if(arr[i] == 1)
            c1++;
        }

        cout<< c1*(1LL<<c0) <<endl;

        

        

    }
    return 0;

}


