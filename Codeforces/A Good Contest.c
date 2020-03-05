#include <stdio.h>

int main()
{
    int caseNum,BeforePoint,AfterPoint,i,count=0;
    char handleNam[30];

    scanf("%d", &caseNum);

    getchar();

    for(i = 0;i < caseNum;i++){
        scanf("%s %d %d",&handleNam,&BeforePoint,&AfterPoint);

        if(BeforePoint>=2400&&AfterPoint>BeforePoint){
            count=1;
        }
    }

    if(count==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;
}
