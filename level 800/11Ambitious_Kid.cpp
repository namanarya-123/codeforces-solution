#include <bits/stdc++.h>
using namespace std;

int main(){

   
        int n;
        cin>> n;

        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int a = INT_MAX;

        for(int i=0; i<n; i++)
        {
            if(arr[i]>=0)
            {
              a = min(a, arr[i]);
            }
        }
        int b = INT_MIN;

        for(int i=0; i<n; i++)
        {
            if(arr[i]<0)
            {
              b = max(b, arr[i]);
            }
        }

        if(b == INT_MIN)
        {
            cout<<a<<"\n";
        }
        else if(a == INT_MAX)
        {
            cout<<-b<<"\n";
        }
        else{
                 b=-b;
                 if(a>b)
                 {
                    cout<<b<<"\n";
                 }else{
                    cout<<a<<"\n";
                 }
        }

    return 0;
}