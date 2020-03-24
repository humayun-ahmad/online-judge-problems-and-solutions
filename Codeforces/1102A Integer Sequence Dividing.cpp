#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,n;

    cin >> n;


        ll total = n*(n+1)/2;
         n = n/2;
        ll even = n*(n+1);
        ll dd = total - n*(n+1);

        //cout << dd-even<<endl;

        if((dd-even)%2==0){
            cout << 0 <<endl;
        }
        else{
            cout << 1 <<endl;
        }



    return 0;
}