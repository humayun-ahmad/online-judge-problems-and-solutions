#include <stdio.h>
int main()
{
    long long int n,store,a,count1=0,count2=0,j=0,count=0;
    scanf("%I64d", &n);
    while(n>0){
        a = n%10;
        if(a==4) {
                count1++;
        }
        if(a==7) count2++;
        j++;
        n = n/10;
    }
    count = count1 + count2;
    if(4==count || 7==count ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
