#include <stdio.h>
//#include <algorithm.h>


int main()
{
    int a,b,c,case1[4];
    scanf("%d %d %d", &a,&b,&c);

    case1[0] = a + b*c;
    case1[1] = a*(b+c);
    case1[2] = a*b*c;
    case1[3] = (a+b)*c;

    //sort(case1);
    for(i = 0;i < 4;i++){
        for(j =i + 1;j < 4;i++){
            if(case1[i]>case1[j]){
                temp =

            }

        }
    }

    printf("%d\n", case1[0]);

    return 0;
}

