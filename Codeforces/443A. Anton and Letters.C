#include <stdio.h>
#include <string.h>

int main()
{
    char ch[3000];
    int x,i,j,count1[26]={0},count=0;

    gets(ch);

    for(i = 0;ch[i] != '\0';i++){
        if(ch[i]>=97 && ch[i]<= 122){
        x = ch[i] - 'a';
        //printf("%d\n", x);
        count1[x]++;
        }
        //printf("%d\n", count1[x]);
    }

    for(i = 0; i < 26;i++){
        //printf("%d", count1[i]);
        if(count1[i]>=1){
            count++;
        }
    }

    printf("%d\n", count);


    return 0;
}
