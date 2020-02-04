#include <stdio.h>

int main()
{
   int in_year,R,i,count=0;
   int a,b,c,d;

     scanf("%d", &in_year);
    for(i = 1;count!=1;i++){
               in_year++;

          R=in_year;
    a = in_year%10;
    R = R /10;
    b = R%10;
    R = R /10;
    c = R%10;
    R = R /10;
    d = R%10;

    if(a==b||a==c||a==d||b==c||b==d||c==d){
        count=0;
    }
    else{
        //count=1;
        printf("%d\n", in_year);
        break;
    }



    }

    return 0;
}
