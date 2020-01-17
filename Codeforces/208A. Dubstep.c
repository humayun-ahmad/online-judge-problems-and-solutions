#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300],ch1[4],ch2[300];
    int i,j=0,len,count=0;

    gets(ch);
    len = strlen(ch);

    for(i = 0;i < len;){

        ch1[0] = ch[i];
        ch1[1] = ch[i+1];
        ch1[2] = ch[i+2];
        ch1[3] = '\0';


    if(!strcmp(ch1,"WUB")){

        if(1==count){

           ch2[j] =' ';
           j++;
           count=0;
        }
        i+=3;

    }

    else{
        ch2[j] = ch[i];
        i++;
        j++;
        count=1;
    }

    }

    ch2[j]='\0';

    printf("%s\n", ch2);

    return 0;
}
