#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,a[100005],m=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(m<a[i]){
            m = a[i];
        }
    }
    //cout << m <<endl;
//    sort(a, a+n, greater<ll>());
    ll b = a[0],cnt=1,t=0;
    for(int i=0;i<n;i++){

        if(m==a[i]){
            t++;
        }
        else if(cnt<=t){
            cnt = t;
            t=0;
        }
        else{
            t=0;
        }
    }
    if(cnt<t) cnt=t;

    cout << cnt <<endl;
    return 0;
}
