#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int a,b,div;
    cin >> a>>b;
    div = a/b;
    if(div%2==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}