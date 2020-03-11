#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,cnt=0,n,rem=0;
    int arr[105];
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        arr[i] = a;
    }


    for(int i=1;i<n;i++){
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1){
            cnt++;
            arr[i+1]=0;
        }
    }

    cout << cnt <<endl;
    return 0;
}
