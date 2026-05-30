#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin>>n;

    for(int i= n-1; i>=0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" "<<" ";
        }


   
        for(int j=n; j<=2*i-1; j++)
        {
            cout<<'*'<<" ";
        }

        cout<<endl;
    }
    return 0;

}