#include <stdio.h>

int main()
{
    int testcase,mishka,charis,mcount=0,scount=0,i;

    scanf("%d", &testcase);

    for(i = 0;i < testcase;i++){

        scanf("%d %d", &mishka,&charis);

        if(mishka>charis){
            mcount++;
        }
        else if(mishka<charis){
            scount++;
        }
    }
    if(mcount>scount){
        printf("Mishka\n");
    }

    else if(mcount<scount){
        printf("Chris\n");
    }
    else{
        printf("Friendship is magic!^^\n");
    }

    return 0;
}
