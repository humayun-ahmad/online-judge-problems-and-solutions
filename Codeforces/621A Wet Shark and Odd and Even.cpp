//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>

#define ffor(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)

//for input
#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define sf(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)

//for output
#define p(n) printf("%d",n)
#define pc(n) printf("%c",n)
#define pf(n) printf("%lf",n)
#define ps(n) printf("%s",n)

#define all(c) (c).begin(),(c).end()
#define pii pair<int,int>
#define ll long long


using namespace std;


int main()
{
    ll sum=0,i,j,a[100006],n;

    cin >> n;

    for(i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum%2==0){
        cout << sum << endl;
    }
    else{
        sort(a,a+n);
        for(i=0;i<n;i++){
            sum = sum - a[i];
            if(sum%2==0){
                cout << sum <<endl;
                break;
            }
            sum = sum + a[i];
        }
    }


    return 0;
}
 