#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300];
    int i,n,x,m=0,count[26]={0};
    scanf("%d", &n);

    getchar();

    gets(ch);

    for(i = 0;ch[i] != '\0';i++){
        if(ch[i]>=97 && ch[i]<=122){
            ch[i] = 'A' + ch[i] - 'a';
        }
        x = ch[i] - 'A';
        count[x]++;

    }

    for(i = 0;i < 26;i++){
        if(count[i]>=1){

        }
        else{
            m=1;
        }
    }
    if(m==1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
