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
        int bits = 0;

        int val = n;

while(val)
{
    bits++;
    val /= 2;
}

bits--;

        int no = pow(2, bits);
        if(no == n)
{
    no /= 2;
}

        vector<int>arr(n);

        for(int i= 0; i< no-1; i++)
        {
            arr[i] = i+1;
        }

        arr[no-1] = 0;

        for(int i=no; i< n; i++)
        {
            arr[i] = i;
        }

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;

        

    }
    return 0;

}



