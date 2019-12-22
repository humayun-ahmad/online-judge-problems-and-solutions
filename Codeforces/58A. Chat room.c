#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300],ch1[6]="hello";
    int i,j,posi=0,store=-1,count=0;


    gets(ch);

    for(i = 0;i < 5;i++){
        for(j = 0;ch[j] != '\0';j++){


            if(ch1[i]==ch[j]&&j>store){
                //printf("%d %d\n",j,store);
                store=j;
                count++;
               break;
            }
        }
        //printf("%c\n", ch1[i]);
    }
    if(count == 5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
