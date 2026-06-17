#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    vector<long long>arr;

    for(long long i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            arr.push_back(i);
        }
    }

    for(long long i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" "; 
    }

    return 0;
}