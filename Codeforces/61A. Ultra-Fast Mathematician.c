#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char ch1[300],ch2[300],ch3[300];

    gets(ch1);
    gets(ch2);

    for(i = 0;ch1[i] != '\0';i++){

        if(ch1[i]==ch2[i]){
            ch3[i]=48;

        }
        else{
            ch3[i]=49;
        }
    }
    ch3[i]='\0';

    printf("%s\n", ch3);


    return 0;
}
