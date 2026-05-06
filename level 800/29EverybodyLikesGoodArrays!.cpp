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

        int op = 0;

        for(int i=1; i<n; i++)
        {
            if((arr[i]%2==1 && arr[i-1]%2==0)||(arr[i]%2==0 && arr[i-1]%2==1))
            {
                continue;
            }else{
                op++;
            }
        }

        cout<<op<<endl;

        }

    
    return 0;
}

