#include <stdio.h>

int main()
{
    int chest=0,biceps=0,back=0,n,rep_exer,i,C=1,Bi=0,Ba=0;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d", &rep_exer);
        if(1==C){
            chest = chest + rep_exer;
            C=0;
            Bi=1;
        }
        else if(1==Bi){
            biceps = biceps + rep_exer;
            Bi = 0;
            Ba = 1;
        }
        else if(1==Ba){
            back = back + rep_exer;
            Ba = 0;
            C = 1;
        }
    }

    if(chest>biceps){
        if(chest>back){
            printf("chest\n");
        }
        else{
            printf("back\n");
        }
    }
    else if(biceps>back){
        printf("biceps\n");
    }
    else{
        printf("back\n");
    }

    return 0;
}