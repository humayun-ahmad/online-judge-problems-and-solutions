#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1005],i,j,c=0;

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> a[i];
    }

    sort(a,a+n);

    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(a[i]<a[j]){
                c++;
                break;
            }
        }
    }

    cout << c <<endl;

    return 0;
}
