#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    if(n>36){
        cout << "-1" <<endl;
    }
    else if(n%2==0){
            n = n/2;
        for(int i=1;i<=n;i++){
            cout << "8";
        }
        return 0;
    }
    else{
        n = n/2;
        for(int i=1;i<=n;i++){
            cout << "8";
        }
        cout <<"4"<<endl;
        return 0;
    }

    return 0;
}
