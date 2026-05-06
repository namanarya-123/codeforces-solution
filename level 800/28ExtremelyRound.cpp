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

        int count=0;
        int y =n;
        while(n!=0)
        {
            count++;
            n/=10;
        }

        if(count==1)
        {
            cout<<y<<endl;
            continue;
        }
        
        int no = pow(10, count-1);
     
        int m = y/no;

        int dig =0;
        dig =  (9*(count -1)) + m;
        cout<<dig<<endl;

        

    }
    return 0;

}