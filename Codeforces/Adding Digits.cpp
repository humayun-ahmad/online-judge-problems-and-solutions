/**
 *    author:  Humayun
 *    created: 20.11.2018 10:24:59
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,p,temp=0;
    int cnt=0;

    cin >> m >> n >> p;
    m = m*10;
    while(cnt<10){
        m = m + cnt;
        if(m%n==0){
            p = p-1;
            cout << m;
            while(p--){
                cout <<0;
            }
            cout <<endl;
            return 0;
        }
        else{
            m = m-cnt;
            cnt++;
            if(cnt==10) break;
        }


    }

    cout << "-1" <<endl;

    return 0;
}
