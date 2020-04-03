#include <bits/stdc++.h>
using namespace std;
int prime[1000];
int p(int n)
{
    int m = n/2;
    int flag = 0;
 for(int i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          return 0;
          flag=1;
      }
  }
  if (flag==0)
      return 1;
}
int main()
{
    int n;
    cin >> n;
 
    for(int i = 2; i <= n; i++){
        int mm = n/i;
        if(p(mm) && p(i) && (mm*i == n) ){
            cout <<i<<mm<<endl;
            break;
        }
    }
    return 0;
}