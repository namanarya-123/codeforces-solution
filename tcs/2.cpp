#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long dig = 0;

    while(n != 0)
    {
        long long rem = n%10;

        dig= max( dig, rem);
        n/=10;
    }

    cout<<dig<<endl;
    return 0;


}