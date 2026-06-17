#include <bits/stdc++.h>
using namespace std;

int main(){
       int n;
       cin>>n;

       int c = 0;

       if(n== 0)
       {
        cout<<0<<endl;
        return 0;
       }

       while(n!= 0)
       {
         int rem = n%10;
         if(rem%2 == 1)
         c++;
         n/=10;
       }

       cout<<c<<endl;
       return 0;


}