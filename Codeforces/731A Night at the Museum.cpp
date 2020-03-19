#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cstdio>
//Humayun Ahmad Rajib
using namespace std;
 
int main()
{
    char ch[300];
    int x,m,n,i,small,big,sum=0,len;
    scanf("%s", ch);
    len = strlen(ch);
    x = ch[0] - 'a';
    big = abs(26-x);
    n = min(x,big);
    sum += n;
    for(i = 0; i<len-1; i++){
        x = ch[i] - ch[i+1];
        m = abs(x);
        big = abs(26-m);
        n = min(m,big);
        sum += n;
    }
    cout << sum << endl;
    return 0;
}