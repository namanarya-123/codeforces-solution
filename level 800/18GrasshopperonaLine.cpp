#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int x, k;
        cin>>x>>k;


        vector<int>arr;

        if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            int curr=x;
            while(x)
            {
                

                if(x==0)
                break;

                if(curr%k==0)
                {
                    curr--;
                    continue;
                }

                if(x-curr<0)
                {
                    curr--;
                    continue;
                }

                x-=curr;
                arr.push_back(curr);


            }
             
            cout<<arr.size()<<endl;
            for(int i=0; i<arr.size(); i++)
            {
                cout<<arr[i]<<" ";
            }

            cout<<endl;
        }

       
    }
    return 0;

}