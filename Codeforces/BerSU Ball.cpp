#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,girl[105],boy[105],cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> girl[i];
    }


    cin >> m;
    for(int i=0;i<m;i++){
        cin >> boy[i];
    }
    a = sizeof(girl);
    sort(girl,girl + n);
    b = sizeof(boy);
    sort(boy,boy+m);
    //m = min(a,b);

    for(int i=0,j=0;j<m && i<n;){
        if(abs(boy[j]-girl[i])<=1){
            cnt++;
            i++;
            j++;

        }
        else if(girl[i]<boy[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout << cnt <<endl;

    return 0;
}
