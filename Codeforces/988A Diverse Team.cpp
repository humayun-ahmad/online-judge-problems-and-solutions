#include <stdio.h>

int main()
{
    int n,k,i,j,a[150],count=0,position[150];

    scanf("%d %d", &n,&k);

    for(i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }

    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(a[i]==a[j]){
               a[j]=0;
            }
        }
    }

    j=0;
    for(i = 0;i < n;i++){
        if(a[i]>0){
            count++;
            position[j]=i+1;
            j++;
        }
    }

    if(count>=k){
        printf("YES\n");
        for(i = 0;i < k;i++){
            if(i<k-1){
                printf("%d ",position[i]);
            }
            else if(i==k-1){
               printf("%d\n",position[i]);
            }
        }
    }
    else{
        printf("NO\n");
    }

    return 0;
}