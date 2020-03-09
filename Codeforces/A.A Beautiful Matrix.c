#include <stdio.h>

int main()
{
    int ara[6][6];
    int i,j,sum,r,s,count1=0,count2=0;

    for(i = 0;i < 5;i++){
        for(j = 0;j < 5;j++){
            scanf("%d", &ara[i][j]);
            if(1==ara[i][j]){
                r = i;
                s = j;
            }
        }
    }
    while(r!=2){
        if(r<2){
            r++;
        }
        else
            r--;
        count1++;
    }
    while(s!=2){
        if(s<2)
            s++;
        else
            s--;

        count2++;
    }


    printf("%d\n", sum = count1 + count2 );

    return 0;
}
