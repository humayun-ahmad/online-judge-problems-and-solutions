#include <stdio.h>
int main()
{
    int n,k,i,count=0;
    int num[60];

    scanf("%d %d", &n,&k);
    for(i = 0;i < n;i++){
        scanf("%d", &num[i]);
    }
    for(i = 0;i < n;i++){
        if(num[i]>=num[k-1]&& num[i] != 0){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
