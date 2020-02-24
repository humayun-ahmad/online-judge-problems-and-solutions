#include <stdio.h>

int main()
{
    int prob,min,probtime[12],i,sum=0,j;

    scanf("%d %d",&prob,&min);

    for(i = 0;i < prob;i++){
        probtime[i]=5*(i+1);
        sum+=probtime[i];
    }

    sum +=min;

    j = prob - 1;

    if(sum<=240){
        printf("%d\n", prob);
        return 0;
    }
    else{
        do{
            sum = sum - probtime[j];
            j--;
            prob--;

        }while(sum>240);

        printf("%d\n", prob);
    }
    return 0;
}
