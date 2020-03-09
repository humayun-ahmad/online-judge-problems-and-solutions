#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    long long int sum=0;

    scanf("%d %d", &a,&b);

    sum = pow(a,b) - pow(b,a);

    printf("%lld\n", sum);

    return 0;
}
