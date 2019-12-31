
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
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    string num1,num2;
    cin >> num1 >> num2;
    int result = 0,cnt1 = 0,cnt2 = 0;
    for(int i = 0; i < n; i++){
        cnt1 = 0,cnt2 = 0;
        int a = num1[i] - '0';
        int rem1,rem2,rem3;
        int b = num2[i] - '0';
        //cout << "check: "<<a << " " <<b<<endl;
        rem1 = abs(a-b);
        rem2 = (10-a) + b;
        rem3 = (10-b) + a;
        //cout << rem1 << " " << rem2 <<" " << rem3 <<endl;
        int res = min(rem1,rem2);
        res =  min(res,rem3);
        result += res;
    }
    cout << result <<endl;
    return 0;
}




