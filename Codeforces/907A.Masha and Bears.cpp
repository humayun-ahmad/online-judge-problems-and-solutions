
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if(d>2*c||d>=b||c>2*d)
            printf("-1\n");
        else
        {
            printf("%d\n%d\n%d\n",2*a,2*b,max(c,d));
        }
    }
    return 0;
}
