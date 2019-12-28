#include <stdio.h>

int main()
{
    int a,i,m=0,count1=0,count0=0;
    char ch[300];
    gets(ch);

    for(i = 0;ch[i]!='\0';i++){
        a = ch[i] - 48;
    if(a==1){
        count0=0;
        count1++;
        if(count1>=7){
            m=1;
            break;
        }
    }
    else if(a==0){
        count1=0;
        count0++;
        if(count0>=7){
            m=1;
            break;
           }
        }
    }
    if(m){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
