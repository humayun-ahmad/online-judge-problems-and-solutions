#include <stdio.h>

int main()
{
    int i,a,b,c,count=0;

    scanf("%d %d",&a,&b);

    for(i = 2;i < b;i++){
        a++;
        if(a%i==0){

            count++;
        }
    }
    if(0==count)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
