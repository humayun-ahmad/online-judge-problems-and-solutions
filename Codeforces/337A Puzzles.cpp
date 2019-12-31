
#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define ull unsigned long long
#define PI acos(-1.0)
#define Hare printf("here\n")
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define loop(i,n) for(int i=0;i<n;i++)



using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    ll n,m;
    cin >> n >> m;
    ll arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    sort(arr,arr+m);

    ll best = INF;

    for(int i = 0; i <= m-n; i++){
        best = min(best,arr[i+n-1]-arr[i]);
    }
    cout << best <<endl;



    return 0;
}
