#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,ans;

    scanf("%d %d",&n,&m);

    ans = m % (int)pow(2,n);

    printf("%d\n", ans);

    return 0;
}