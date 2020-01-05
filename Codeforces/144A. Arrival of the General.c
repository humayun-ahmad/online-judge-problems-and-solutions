#include <stdio.h>

int main()
{
    int i,max=0,min=0,caseNum,n[300];
    int minposition,maxposition,count=0;
    scanf("%d", &caseNum);

    for(i = 0;i < caseNum;i++){
        scanf("%d", &n[i]);
        if(n[i]>max){
            max=n[i];
            maxposition=i;
        }
    }

    for(i = 0;i < caseNum;i++){
        if(max>n[i]){
            max = n[i];
            minposition=i;
        }
    }

    for(i = 0;i < caseNum;i++){
        if(n[0]==n[i]){
            count1++;
        }
        else
    }

    if(maxposition>minposition && caseNum != 2){
        count = maxposition + caseNum - (minposition+3);

    }
    else if (maxposition < minposition && caseNum != 2){

        count = maxposition + caseNum -(minposition + 1);

    }
    else if(n[0]<n[1]){
        count=1;
    }


    printf("%d\n", count);

    return 0;
}
