#include <stdio.h>
#include <string.h>

int main()
{
    char ch[300];
    int n[300],i,j=0,temp,count=0,len;

    gets(ch);
    len = strlen(ch);
    for(i = 0;ch[i] != '\0';i+=2,j++){
            count++;
        n[j] = ch[i] - 48;

    }
    n[j] = '\0';


    for(i = 0;i < count;i++){
        for(j=i+1;j<count;j++){
            if(n[i]>n[j]){
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;

            }

        }

    }

        j=0;
    for(i = 1;i <= len;i++){
        if(i%2==1){
            printf("%d", n[j]);
            j++;
        }
        if(i%2==0 && i < len){
           printf("+");
        }
    }



    return 0;
}
