#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll DeterminGcd(ll x,ll y)
{
    if(x%y){
        return DeterminGcd(y,x%y);
    }
    else{
        return y;
    }

}

int main()
{
    ll a,b,x,y;

    cin >> a >> b >> x >> y;

    ll st = DeterminGcd(x,y);

    y = y/st;
    x = x/st;

    cout << min(b/y,a/x) <<endl;



    return 0;
}
