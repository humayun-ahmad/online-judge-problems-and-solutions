#include <stdio.h>
#include <string.h>

int main()
{
    char ch[200];
    int i,n,count=0,countR=0,countB=0,countG=0;

    scanf("%d", &n);
    getchar();
    gets(ch);

    for(i = 0;i < n;i++){


        if(ch[i]=='R'){

            countB=0;
            countG=0;
            countR++;

            if(countR>=2){
                count++;
            }
        }
        else if(ch[i]=='B'){
            countR=0;
            countG=0;
            countB++;
            if(countB>=2){
                count++;
            }
        }
        else if(ch[i]=='G'){
            countR=0;
            countB=0;
            countG++;
            if(countG>=2){
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
