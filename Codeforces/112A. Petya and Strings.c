#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[300],ch2[300];
    int i;
    gets(ch1);
    gets(ch2);

    strlwr(ch1);
    strlwr(ch2);


    if(strcmp(ch1,ch2)==0){
        printf("0\n");
    }
    else if(strcmp(ch1,ch2)>0){
        printf("1\n");
    }
    else if(strcmp(ch1,ch2)<0){
        printf("-1\n");
    }

    return 0;
}
