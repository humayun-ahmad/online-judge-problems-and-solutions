#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n>>t;
    if(n==1 && t==10){
        cout << "-1" <<endl;
    }
    else if(t<10){
    for(int i=0;i<n;i++){
        if(t<10){
            cout << t;
        }
    }
    }
    else{
        cout <<1;
        for(int i=0;i<n-1;i++){
            cout <<0;
        }
    }
    return 0;
}