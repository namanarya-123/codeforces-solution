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
        int tc =0;
      
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

            if(arr[i] ==2)
            tc++;
        }

        int cc =0;
        int found = false;

        if(tc ==0)
        {
            cout<<1<<endl;
            continue;
        }

        if(tc%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]==2)
            {
                cc++;
                tc--;
            }

            if(cc==tc)
            {
                cout<<i+1<<endl;
                found = true;
                break;
            }
        }

        if(found == false)
        {
            cout<<-1<<endl;
        }

       

    }
    return 0;

}