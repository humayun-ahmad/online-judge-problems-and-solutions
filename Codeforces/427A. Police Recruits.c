#include <stdio.h>

int main()
{
    int n,count=0,store=0,i,a,sub=0,j,m=0;

    scanf("%d", &n);

    for(i = 0;i < n;i++){
        scanf("%d",&a);

        if(a==-1){
            count++;
            if(store>0){
                count--;
                store--;
                sub = store;
            }
            m=0;
        }
        if(a>=1){
            m++;
            if(m<=1){
            //store=a;
            store=sub+a;
            }
            if(m>=2){
            store = store + a;
        }

        }
    }

    printf("%d\n", count);

    return 0;
}
