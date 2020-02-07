#include <stdio.h>

int main()
{
    int n,i,j,s,count=0;

    scanf("%d", &n);

    s = n*n;

    for(i = 1;i<=s;i++){
        if(i%2==1)
            count++;
    }

    printf("%d\n",count);

    for(i = 1;i <= n;i++){
        if(i%2==1){
            for(j = 1;j <= n;j++){
                if(j<n&&j%2==1)
                    printf("C");
                else if(j < n&&j%2==0)
                    printf(".");

                if(j==n&&j%2==1)
                    printf("C\n");
                else if(j==n&&j%2==0){
                    printf(".\n");
                }
            }
        }
        else if(i%2==0){
            for(j = 1;j <= n;j++){
                if(j%2==1&&j<n){
                    printf(".");
                }
                else if(j%2==0&&j<n){
                    printf("C");
                }
                if(j==n&&j%2==1){
                    printf(".\n");
                }
                else if(j==n&&j%2==0){
                    printf("C\n");
                }
            }
        }
    }

    return 0;
}
