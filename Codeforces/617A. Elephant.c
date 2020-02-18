#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n>=5){
        if(n%5==0){
            printf("%d\n", n/5);
        }
        else{
            n = n/5 + 1;
            printf("%d\n", n);
        }
    }
    else if(n==4 || n==3 || n==2 || n==1){
        printf("1\n");
    }



    return 0;
}
