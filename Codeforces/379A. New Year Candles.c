#include <stdio.h>

int main()
{
    int a,b,sum=0,x,rem;

    scanf("%d %d", &a,&b);
    sum=a;
    while(a>=b){
        rem = a%b;
        x = a/b;

        sum = sum + x;

        a=rem + x;
    }

    printf("%d\n", sum);

    return 0;
}
