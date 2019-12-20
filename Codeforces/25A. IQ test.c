#include <stdio.h>
int main()
{
    int n,i,m=0,store,num[200];

    scanf("%d", &n);

    for(i = 0;i < n;i++){
        scanf("%d", &num[i]);
        if(num[i]>m){
            m=num[i];
        }
    }

    for(i = 0;i < n;i++){
        if(num[i]<m){
            m=num[i];
        }
    }

    for(i = 0;i < n;i++){
        if(num[i]%m==0){

        }
        else{
            store=num[i];
             printf("%d\n",i+1);
             break;
        }

    }


    return 0;
}
