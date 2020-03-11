#include <stdio.h>

int main()
{
    int testcase,i,a,b,sum=0;

    scanf("%d", &testcase);

    for(i = 1;i <= testcase;i++){
        scanf("%d %d", &a,&b);
        for(a;a<=b;a++){
            if(a%2==1){
                sum = sum + a;
            }
        }
        printf("Case %d: %d\n",i,sum);
        sum = 0;
    }

    return 0;
}
