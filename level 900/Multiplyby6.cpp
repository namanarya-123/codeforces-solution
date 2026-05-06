#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
       long long n;
       cin>>n;

       int c3 =0;
       int c2 =0;

       for(int i=2; i<4; i++)
       {
        if(n%i==0)
        {
           while(n%i ==0 )
           {
              if(i==2)
              c2++;

              if(i==3)
              c3++;

              n/=i;
           }
        }
       }

       if(n!=1)
       {
          cout<<-1<<endl;
          continue;
       }

       if(c3<c2)
       {
          cout<<-1<<endl;;
          continue;
       }

       int no = c3-c2;

       cout<<no+c3<<endl;


    



    }
    return 0;

}


