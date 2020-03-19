#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ara[1000000];
 
 
int main()
{
 
    ll n;
    scanf("%lld", &n);
 
    for(ll i=0;i<n;i++){
        scanf("%lld", &ara[i]);
    }
 
    sort(ara, ara+n);
 
    ll q;
    scanf("%lld", &q);
 
    while(q--){
        ll d;
        scanf("%lld", &d);
 
        ll ans=upper_bound(ara, ara+n, d)-ara;
        cout << ans <<endl;
    }
 
    return 0;
}