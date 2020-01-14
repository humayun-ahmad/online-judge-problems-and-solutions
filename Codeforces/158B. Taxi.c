#include <stdio.h>
int main()
{
    int i,n,x,y,a[100006],l,count=0, count1=0,count2=0,count3=0,count4=0;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(1==a[i])
            count1++;
        else if(2==a[i])
            count2++;
        else if(3==a[i])
            count3++;
        else if(4==a[i])
            count4++;
    }

    count += count4;
    count4 = 0;

    if(count3<=count1){
        count += count3;
        count1 = count1 - count3;
        count3 = 0;
    }
    else if(count1<count3){
        count += count1;
        count3 = count3 - count1;
        count1 = 0;
        count += count3;
        count3 = 0;

    }
    count += count3;
    count3 = 0;

    if(count2%2==0){
        count2 = count2/2;
        count += count2;
        count2 = 0;
    }
    else if(count2%2==1){
        count2 = count2/2;
        count += count2;
        count2 = 1;
    }

    count1 = count2 + count1;
    count2 = 0;

    if(count1%4==0){
        count1 = count1/4;
        count += count1;
        count1 = 0;
    }
    else{
        count1 = count1/4;
        count1 = count1 + 1;
        count += count1;
        count1 = 0;
    }

    //count += count1 + count2 + count3 + count4;

    printf("%d\n", count);
    return 0;
}
