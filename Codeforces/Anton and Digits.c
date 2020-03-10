#include <stdio.h>

int main()
{
    int k2,k3,k5,k6,sum=0,m,low,min,i;

    scanf("%d %d %d %d", &k2,&k3,&k5,&k6);

    if(k2<k5&&k2<k6){
        min = k2;
    }
    else if(k5<k6){
        min = k5;
    }
    else{
        min = k6;
    }

    for(i = 0;i < min;i++){
        sum = sum  + 256;
    }

    if(k2>min){
        m = k2 - min;

        if(m>k3){
            low = k3;
        }
        else{
            low = m;
        }
        for(i = 0;i < low;i++){
            sum = sum + 32;
        }
    }

    printf("%d\n", sum);


    return 0;
}
