#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300], ch1[300], ch2[300],f;
    int i,j=0,l=0,len,count1=0,count=0,count2=0;

    gets(ch);
    len=strlen(ch);
    if(ch[0]>=97 && ch[0]<=122){
        l=1;
        f = 'A' + ch[0] - 'a';
    }


    for(i = 0;ch[i] != '\0';i++){
        if(ch[i]>=65 && ch[i]<=90){
            ch1[i]='a' + ch[i] - 'A';
            count1++;

            if(ch[i]>=65){
                ch2[j]='a' + ch[i] - 'A';
                j++;
            }
        }
        else{
            count2++;
            ch1[i]=ch[i];
        }
    }
    ch1[i] = '\0';
    ch2[j] = '\0';

    if(l==1 && count1==len-1){
        printf("%c%s\n", f,ch2);
    }
    else if(count1==len){
        printf("%s\n", ch1);
    }
    else{
        printf("%s\n", ch);
    }

    return 0;
}
