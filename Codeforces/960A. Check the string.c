#include <string.h>
#include <stdio.h>

int main()
{
    int i,count=0,count1=0,count2=0,store=0,m=0,n,p;
    char ch[15000];
    gets(ch);


    p=n=ch[0];

    for(i = 0;ch[i] != '\0';i++){
        if(ch[i] > n){
            n = ch[i];
            break;
        }
    }

    for(i = 0;ch[i] != '\0';i++){
        if(ch[i]==p){
            count1++;
        }
        else if(ch[i] != n && ch[i] != p){
            count2++;
        }
        if(count2==1){
            store=count1;
            count2=0;
        }
    }

    if(count1==store)
    printf("YES\n");
    else{
        printf("NO\n");
    }
    return 0;
}
