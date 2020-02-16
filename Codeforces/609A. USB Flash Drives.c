#include <stdio.h>

int main()
{
    int numofdrive,filesize,flasedive[1500],sum=0;
    int count=0,i,j,temp;

    scanf("%d %d", &numofdrive,&filesize);

    for(i = 0;i < numofdrive;i++){
        scanf("%d", &flasedive[i]);
    }

    for(i = 0;i < numofdrive;i++){
        for(j = i+1;j < numofdrive;j++){
            if(flasedive[i]>flasedive[j]){
                temp = flasedive[i];
                flasedive[i]=flasedive[j];
                flasedive[j]=temp;
            }
        }
    }
    for(i = numofdrive-1;i>=0;i--){
        sum += flasedive[i];
        count++;
        if(sum>=filesize){
           printf("%d\n", count);
            return 0;
        }
    }

    return 0;
}
