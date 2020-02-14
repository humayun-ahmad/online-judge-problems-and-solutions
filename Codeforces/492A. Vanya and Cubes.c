#include <stdio.h>

int main()
{
    int gnum,i=1,j=2,count=0,sum=0;

    scanf("%d", &gnum);

    while(sum<=gnum){
        sum = sum + i;
        count++;
        i= i + j;
        j++;
    }

    printf("%d\n", count-1);

    return 0;
}
