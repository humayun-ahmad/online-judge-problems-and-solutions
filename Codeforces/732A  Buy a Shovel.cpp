
#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define ull unsigned long long
#define PI acos(-1.0)
#define Hare printf("here\n")
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define loop(i,n) for(int i=0;i<n;i++)

using namespace std;
//map<string,int> mp;

int main()
{
    //freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int a , b;
    cin >> a >> b;
    for(int i = 1; i <= 9; i++){
        if(a*i%10 == b || a*i%10 == 0){
            cout << i <<endl;
            break;
        }
    }

    return 0;
}



