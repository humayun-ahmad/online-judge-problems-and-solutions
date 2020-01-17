#include <stdio.h>

int main()
{
    int n,a,b,c,d,e,f,count=0,i=1;

    scanf("%d %d %d %d", &n,&a,&b,&c);

    while(i<=n){
        d = n-i;
        if(a==i&&b==d||a==d&&b==i||b==i&&c==d||b==d&&b==i||a==d&&c==i||a==i&&c==d){
            count=1;
            printf("2\n");
            return 0;
        }
        e = i + 1;
        if(a==i&&b==d&&c==e||a==d&&b==i&&c==e||a==e&&b==d&&c==i||a==i&&b==e&&c==d||a==e&&b==i&&c==d||a==d&&b==e&&e==1||a==e&&b==d&&c==i){
            printf("3\n");
            return 0;
        }



        i++;

    }
     if(a==n&&c==n&&b==n){
            printf("1\n");
            return 0;
        }
        else{
            printf("%d\n",n);
        }

    return 0;
}
