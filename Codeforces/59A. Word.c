#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300],capital[300],small[300];
    int i,len,countlow=0,countup=0;

    gets(ch);

    len = strlen(ch);

    for(i = 0;ch[i] != '\0';i++){

        if(ch[i]>=97 && ch[i]<=122){
            capital[i]='A' + ch[i] - 'a';
            countup++;
       }

       else{
        capital[i]=ch[i];
       }
       //printf("%d\n", countup);
       if(ch[i]>=65 && ch[i]<=90){
        small[i]='a' + ch[i] - 'A';
        countlow++;

       }
       else{
        small[i]=ch[i];
       }
       //printf("%d\n",countlow);
    }
    capital[i]='\0';
    small[i]='\0';
    //printf("%s\n", small);
    //printf("%d %d\n", countlow,countup);

    if(countlow==len || countup<countlow){
        printf("%s\n", capital);
    }
    else{
        printf("%s\n", small);
    }


    return 0;
}
