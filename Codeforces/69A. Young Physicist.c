#include <stdio.h>
int main()
{
    long long int case_num,i,count=0,a,b,c,sum1=0,sum2=0,sum3=0;

    scanf("%lld", &case_num);

    for(i = 0; i<case_num;i++){
        scanf("%lld %lld %lld", &a,&b,&c);
        sum1 = sum1 + a;
        sum2 = sum2 + b;
        sum3 = sum3 + c;
    }
    if(sum1==0 && sum2==0 &&sum3==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;
}
