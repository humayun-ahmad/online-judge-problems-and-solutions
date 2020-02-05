#include <stdio.h>
int main()
{
    long long int n,a,odd;
    scanf("%lld %lld", &n,&a);
       if(n%2==1){
            n=n/2 + 1;
            if(a<=n){
            a = 2*a -1;
            printf("%lld\n", a);
       }
       else if(a>n){
        a = a - n;
        a = 2*a;
        printf("%lld\n", a);
       }
       }
    else{
        n=n/2;
        if(a<=n){
            a = 2*a -1;
            printf("%lld\n", a);
       }
       else{
        a = a - n;
        a = 2*a;
        printf("%lld\n", a);
       }
    }
    return 0;
}
