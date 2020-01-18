#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300];
    int count1[26]={0},count=0,i,j;

    gets(ch);



    for(i=0;ch[i] != '\0';i++){
        j = ch[i] - 'a';
        count1[j]++;

    }
    for(i=0;i < 26;i++){
        if(count1[i]>=1){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }



    return 0;
}
