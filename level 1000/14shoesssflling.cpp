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

       

        vector<int>ans;

       if(arr[n-2] != arr[n-1] && arr[0] != arr[1])
       {
          cout<<-1<<endl;
          continue;
       }else{

        arr[0] = 2;
        arr[1] = 1;
        for(int i = 2; i<n-2; i++)
        {
            arr[]

        }
       }
    }
    return 0;

}
