#include <stdio.h>
int main()
{
    int num,n[100005],i,m=0,s=0,count=0;

    scanf("%d", &num);

    for(i = 0;i < num;i++){
        scanf("%d", &n[i]);
        if(n[i]>=s){
            s=n[i];
            count++;
            if(count>m){
                m=count;
            }
        }
        else{
            count=1;
            s=n[i];
        }

    }

    printf("%d\n", m);

    return 0;
}
