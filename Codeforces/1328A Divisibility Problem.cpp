#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int n;
    cin >>n;
    while(n--){
        cin >> a >> b;
        if(a%b==0){
            cout << '0'<<endl;
        }
        else{
            int m = a/b + 1;
            m = m*b;
            cout << m-a <<endl;
        }
    }
    return 0;
}
