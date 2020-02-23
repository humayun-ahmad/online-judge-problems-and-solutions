#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1010][6];

    int i,j=0,n,count=0;

    scanf("%d", &n);

    getchar();

    for(i = 0;i < n;i++){
        scanf("%s", ch[i]);
        j++;

    }

    j=0;
    for(i = 0;i < n;i++,j++){
        if(ch[i][0]=='O'&&ch[i][1]=='O'){
            ch[i][0]='+';
            ch[i][1]='+';
            count=1;
            break;
        }

        if(ch[i][3]=='O'&&ch[i][4]=='O'){
            ch[i][3]='+';
            ch[i][4]='+';
            count=1;
            break;
        }

    }

    if(1==count){
        printf("YES\n");
        for(i = 0;i < n;i++){
            printf("%s\n", ch[i]);
        }
    }
    if(0==count){
        printf("NO\n");

    }

    return 0;
}
