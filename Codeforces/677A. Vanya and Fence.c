#include <stdio.h>

int main()
{
    int fnum,fenHight,n,sum=0,i;

    scanf("%d %d", &fnum,&fenHight);

    for(i = 0;i < fnum;i++){
        scanf("%d", &n);
        if(n<=fenHight){
            sum = sum + 1;
        }
        else{
            sum = sum + 2;
        }

    }

    printf("%d\n", sum);

    return 0;
}
