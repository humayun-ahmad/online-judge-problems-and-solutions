#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count[7]={0};
    char ch[10];

    scanf("%d", &n);

    getchar();

    for(i = 0;i < n;i++){
        gets(ch);

        if(!strcmp(ch,"purple"))
            count[0] = 1;
        else if(!strcmp(ch,"green"))
            count[1] = 2;
        else if(!strcmp(ch,"blue"))
            count[2] = 3;
        else if(!strcmp(ch,"orange"))
            count[3] = 4;
        else if(!strcmp(ch,"red"))
            count[4] = 5;
        else if(!strcmp(ch,"yellow"))
            count[5] = 6;
    }

    printf("%d\n", 6-n);

    for(i = 0;i < 6;i++){
        if(count[0]==0&&i==0)
            printf("Power\n");
        else if(count[1]==0&&i==1)
            printf("Time\n");
        else if(count[2]==0&&i==2)
            printf("Space\n");
        else if(count[3]==0&&i==3)
            printf("Soul\n");
        else if(count[4]==0&&i==4)
            printf("Reality\n");
        else if(count[5]==0&&i==5)
            printf("Mind\n");

    }

    return 0;
}
