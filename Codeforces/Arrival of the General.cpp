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
#define p(n) printf("%d\n",n)
#define pc(n) printf("%c",n)
#define pf(n) printf("%lf",n)
#define ps(n) printf("%s",n)

#define all(c) (c).begin(),(c).end()
#define pii pair<int,int>
#define ll long long


using namespace std;


int main()
{
    int n,i,j,a[105],fi=0,lai=0,Max=0,Min,temp = 0;

    cin >> n;

    ffor(i,n){
        cin >> a[i];
        if(i==0){
            Min=a[0];
        }

        if(a[i]>Max){
            Max = a[i];
            fi = i;
        }
        if(a[i]<=Min){
            Min = a[i];
            lai = i;
        }
    }

    if(fi==0 && lai == n-1){
        cout << "0" << endl;
        return 0;
    }
    //p(n);
    if(fi < lai){
    temp = fi + n-lai-1;
    //cout << temp << " " << fi << " " << lai <<endl;
    }
    else{
        temp = fi + n-lai -2;
    }
    cout << temp << endl;

    return 0;
}
