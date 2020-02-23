#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count1=0,count2=0;
    char ch[300000];
    scanf("%d", &n);
    getchar();
    gets(ch);

    for(i = 0;i < n;i++){


        if(ch[i] == 'A'){
            count1++;
        }

        else
            count2++;


    }

    if(count1 > count2){
        printf("Anton\n");
    }
    else if(count2 > count1)
        printf("Danik\n");
    else{
        printf("Friendship\n");
    }

    return 0;
}

