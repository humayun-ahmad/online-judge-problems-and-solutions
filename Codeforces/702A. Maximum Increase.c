#include <stdio.h>
int main()
{
    int num,i,j=0,m=0,n,count=0;

    scanf("%d", &n);

    for(i = 1;i <= n;i++){
        scanf("%d", &num);

        if(num > m){
            m=num;
            count++;
            if(count > j){
                j=count;
            }
        }
        else{
            count=1;
            m=num;
        }

    }

    printf("%d\n", j);


    return 0;
}

