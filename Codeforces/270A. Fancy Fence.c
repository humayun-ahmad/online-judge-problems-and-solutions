#include <stdio.h>

int main()
{

    int test,angle,i;
    float n;
    scanf("%d", &test);

    for(i = 0;i < test;i++){
        scanf("%d",&angle);

        n = (2.0*180.0)/(float)(180-angle);

        if(n - (int)n==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
