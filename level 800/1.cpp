#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
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

        int a = -1;
        int ca=0;
        int b = -1;
        int cb =0;

        a= arr[0];
        ca =1;
        bool flag = false;

        for(int i=1; i<n; i++)
        {
            if(arr[i] == a)
            {
                ca++;
            }
            
               else if(b == -1)
                {
                   b= arr[i];
                   cb++;
                }
            

            else if(arr[i]==b)
            {
                cb++;
            }

            else
            {
                flag = true;
                cout<<"No"<<"\n";
                break;
            }
        }

        if(!flag)
        {
            if( ca == cb || ca+1== cb || cb+1== ca || ca == n)
            {
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        } 
    }

    return 0;
}