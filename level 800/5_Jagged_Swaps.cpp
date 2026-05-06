#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
   
        int n;
        cin>> n;
        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        vector<int>copy= arr;
        sort(copy.begin(), copy.end());

        while(n){
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        n--;
    }

        if(arr == copy)
        {
          cout<<"yes"<<"\n";
        }else{
          cout<<"no"<<"\n";
        }


     
    }

    return 0;
}