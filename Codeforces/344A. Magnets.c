#include <stdio.h>

int main()
{
    int n,count10=0,count01=0,testcase,i,count=0;

    scanf("%d", &testcase);

    for(i = 0;i < testcase;i++){
        scanf("%d", &n);

        if(n==10){
            count01=0;
            count10++;
            if(count10==1){
                count++;
            }
        }
        else if(n==01){
            count10=0;
             count01++;
            if(count01==1){
                count++;
            }

        }
    }
    printf("%d\n", count);

    return 0;
}
