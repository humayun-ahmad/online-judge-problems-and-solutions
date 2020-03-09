#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,sum,a,b,c,i;
    cin >> tc;
    for( i=0;i<tc;i++){
        ll a, b,c;
        cin >> a >> b>>c;
        if(c%2==1){
            sum = a*(c/2 + 1) - b*(c/2);
        }
        else{
            sum = a*(c/2) - b*(c/2);
        }

        cout << sum <<endl;
    }

    return 0;
}
