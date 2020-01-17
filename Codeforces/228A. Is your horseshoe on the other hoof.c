#include <stdio.h>

int main()
{
    int a[4],count=0,i,j;

    for(i = 0;i < 4;i++){
        scanf("%d",&a[i]);
        if(i!=0){
            for(j = 0;j <= i-1;j++){
                if(a[j]==a[i]){
                    count++;
                    break;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
