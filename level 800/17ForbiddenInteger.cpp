#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, k , x;
        cin >> n >>k>>x;
        

        vector<int>arr;
        while(n)
        {
            if(k==0)
            break;
            
            if(k==x)
            {
                k--;
              continue;
            }
            // if taking k leads to dead end, skip it
if(n - k == 1 && x == 1){
    k--;
    continue;
}

            if(n-k<0)
            {
                k--;
                continue;
            }

            arr.push_back(k);
            n-=k;
        }

        if(n==0)
        {
            cout<<"YES"<<"\n";
            cout<<arr.size()<<"\n";

            for(int i=0; i<arr.size(); i++)
            {
                cout<<arr[i]<<" ";
            }
             cout << "\n";
        }else{
            cout<<"NO"<<"\n";
        }

       
    }
    return 0;

}