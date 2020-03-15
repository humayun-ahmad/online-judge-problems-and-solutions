#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int N,M,k,L,i,j,s=0,tl=0,u,store=0;
    cin >> N >> M >> k >> L;
    i = k+L;
    u = i/M;
    if(i%M!=0) u++;
    if(N<i) {
        cout << "-1" <<endl;
        return 0;
    }
    if(store <= N){
        s = 1;
        u = j;
    }

    if((store-k)>L){
        tl = 1;
    }
    if(tl==1 && s==1){
        cout << u << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}
