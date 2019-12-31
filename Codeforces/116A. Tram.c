#include <stdio.h>

int main()
{
    int train_stop_num,exit_num,enter_num;
    int i,max=0,sum=0;

    scanf("%d", &train_stop_num);

    for(i = 0;i < train_stop_num;i++){
        scanf("%d %d", &exit_num, &enter_num);

        sum = sum + enter_num - exit_num;

        if(sum>max){
            max = sum;
        }
    }

    printf("%d\n", max);

    return 0;
}
