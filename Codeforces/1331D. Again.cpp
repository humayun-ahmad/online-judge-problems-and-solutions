#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int a = str[6] + '0';
    if(a%2 == 0){
        cout << "0" <<endl;
    }
    else{
        cout << "1" <<endl;
    }
    return 0;
}