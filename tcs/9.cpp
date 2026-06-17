#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr;

    arr.push_back(1);

    for(int i=2;  i*i <=n ; i++)
    {
        if(n%i == 0)
        {
            arr.push_back(i);
             arr.push_back(n/i);
        }

       
    }

    int ans = 0;

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
        ans+=arr[i];
    }
    cout<<ans;

    if(ans == n)
    {
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}