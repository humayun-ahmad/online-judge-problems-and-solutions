#include <stdio.h>

int main()
{
    int a,pairNum,days,sum=0,count=0,rem;

    scanf("%d %d", &pairNum,&days);

        sum = sum + pairNum;

    while(pairNum>=days){
            if(pairNum%days==0){
                pairNum /= days;
                sum = sum + pairNum;
            }
            else{
                a = pairNum;
                pairNum /= days;

                sum = sum + pairNum;

                rem = a%days;

                pairNum = pairNum + rem;
            }
        }

    printf("%d\n", sum);

    return 0;
}
