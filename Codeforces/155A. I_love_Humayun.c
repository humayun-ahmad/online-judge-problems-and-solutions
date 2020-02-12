#include <stdio.h>

int main()
{
    int n,num[1010],i,max=-1,min=0,count=0,j=1;

    scanf("%d", &n);

    for(i = 0;i < n;i++){
        scanf("%d", &num[i]);
        if(num[i]>max){
            max = num[i];
            count++;
            if(count==1){
                min = max;
            }
        }
        else if(num[i]<min){
            count++;
            min = num[i];
          }
        }


    printf("%d\n", count-1);


    return 0;
}
