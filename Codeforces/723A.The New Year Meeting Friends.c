#include <stdio.h>

int main()
{
    int a,b,c,min,max=0,store;

    scanf("%d %d %d", &a,&b,&c);

    if(a<b && a<c)
        min=a;
    else if(b<a&&b<c)
        min=b;
    else
        min=c;

    if(a>b && a>c)
        max=a;
    else if(b>a&&b>c)
        max=b;
    else
        max=c;

    printf("%d\n", max-min);


    return 0;
}
