#include <stdio.h>

int main()
{
    int i,j,temp,num,in_num[130];
    int sum=0,sum1=0,count=0;

    scanf("%d", &num);

    for(i = 0;i < num;i++){
        scanf("%d", &in_num[i]);
    }

    for(i = 0;i < num;i++){
        for(j=i+1;j < num;j++){
            if(in_num[i] > in_num[j]){
                temp = in_num[i];
                in_num[i] = in_num[j];
                in_num[j] = temp;
            }
        }
    }
    for(i = 0;i < num;i++){

    }

    sum1 = in_num[num-1];

    for(i = 0;i < num-1;i++){
       sum = sum + in_num[i];
    }
    //
//printf("%d\n",sum);
    if(num>=3){
    i = num-2;
    }
    //printf("%d\n", num);
    if(num>1){

    for(;i >= 0;i--){
                //
            count++;
            //printf("%d\n", i);

        if(sum1>sum){
            break;
        }
        else{
            sum1 = sum1 + in_num[i];
            sum = sum - in_num[i];
        }
        //printf("%d %d\n", sum1,sum);
    }

        printf("%d\n", count);

    }

    else{
        printf("1\n");
    }
    return 0;
}
