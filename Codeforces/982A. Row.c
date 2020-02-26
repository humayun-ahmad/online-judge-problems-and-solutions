#include <stdio.h>
#include <string.h>

int main()
{

    int n,i,j,count1=0,count2=0;
    char ch[3000];
    scanf("%d", &n);

    getchar();

    gets(ch);

    for(i = 0;i < n;i++){
        j = ch[i] - '0';
        if(j==1){
            count2=0;
            count1++;
            if(count1>=2)
            printf("NO\n");
                return 0;
        }
        else{
            count1=0;
            count2++;
            if(count2>=2){
                printf("NO\n");
                return 0;
            }

        }
    }

    printf("YES\n");
    return 0;
}
