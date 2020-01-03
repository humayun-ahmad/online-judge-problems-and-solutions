#include <stdio.h>
#include <string.h>

int main()
{
    int x,m=1,count1[26]={0},count2[26]={0},i;
    char ch1[300],ch2[300],ch3[300];

    gets(ch1);
    gets(ch2);
    gets(ch3);

    strcat(ch1,ch2);

    for(i = 0;ch1[i] != '\0';i++){
        x = ch1[i] - 'A';
        count1[x]++;
    }

    for(i = 0;ch3[i] != '\0';i++){
        x = ch3[i] - 'A';
        count2[x]++;
    }

    for(i = 0;i < 26;i++){
        if(count1[i]!=count2[i]){
            printf("NO\n");
            return 0;

        }
    }
    printf("YES\n");

    return 0;
}
