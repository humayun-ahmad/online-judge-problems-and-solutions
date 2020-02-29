#include <stdio.h>
int main()
{
    int a,b,sum,count1=0,count2=0,sum1,i;

    scanf("%d %d",&a,&b);

    sum = a + b;

    for(i = 1;i <= sum;i++){
        if(i%2==0)
            count1++;
        else
            count2++;
    }

    if(a==count1 && b==count2)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
