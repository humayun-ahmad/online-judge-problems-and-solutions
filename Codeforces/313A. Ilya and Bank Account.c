#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,n,len,min,i;
    char ch[30],ch1[30];

    gets(ch);

    len = strlen(ch);

    n = atoi(ch);

    if(n>=0){
        printf("%d\n", n);
    }
    else{
        if(len == 2){
            printf("0\n");
        }
        else if(len==3){
            a =ch[2] - 48;
            b =ch[1] - 48;

            if(a>b){
                min=b;
            }
            else{
                min = a;
            }
            if(min==0){
                printf("0\n");
                return 0;
            }
            else{
                printf("-%d",min);
            }
        }

        else{
            for(i = 0;i < len-2;i++){
                ch1[i] = ch[i];
            }
            ch1[i] = '\0';
            a= 0;
            b=0;
            a = ch[len-1] - '0';
            b = ch[len-2] - '0';


            if(a>b){
                min = b;
            }
            else{
                min = a;
            }
            printf("%s%d\n",ch1,min);
        }

    }


    return 0;
}
