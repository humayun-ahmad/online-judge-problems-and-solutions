#include <stdio.h>

int main()
{
    int strength,i,line,initial,dragon_strength,bonus,count=0;

    scanf("%d %d", &strength,&line);

    initial=strength;
    for(i = 0;i < line;i++){
        scanf("%d %d",&dragon_strength,&bonus);
        if(initial > dragon_strength){
            initial = initial + bonus;
            count++;
        }

    }

    if(count==line){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
