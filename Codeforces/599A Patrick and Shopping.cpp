#include <stdio.h>
 
int main()
{
    int a,b,c,sum1=0,sum2=0,sum3=0,m,sum4=0;
 
    scanf("%d %d %d", &a,&b,&c);
 
    sum1 = 2*(a + b);
    sum2 = a + b + c;
    sum3 = 2*(b + c);
    sum4 = 2*(a + c);
 
    if(sum1<=sum2){
        m = sum1;
    }
    else if(sum2 < sum1){
        m = sum2;
    }
 
 
    if(sum3<=m){
        m = sum3;
    }
    if(sum4<=m){
        m = sum4;
    }
 
 
    printf("%d\n", m);
 
 
 
    return 0;
}