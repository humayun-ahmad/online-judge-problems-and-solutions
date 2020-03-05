#include <stdio.h>

int main()
{
    int n,a[1005],i;

    scanf("%d", &n);

    for(i = 0;i < n;i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            a[i] = a[i] - 1;
        }

    }

    for(i  = 0;i < n;i++){
        if(i<n-1){
            printf("%d ", a[i]);
        }
        else if(i==n-1){
            printf("%d\n", a[i]);
        }

    }


    return 0;
}
