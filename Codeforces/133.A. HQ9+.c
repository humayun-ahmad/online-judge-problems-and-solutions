#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0;
    char ch[200];
    gets(ch);
    for(i = 0;ch[i] != '\0';i++){
        if('H'==ch[i] || 'Q'==ch[i] || 57==ch[i]){
            printf("YES\n");
            j++;
            break;
        }

    }
    if(j==0)
        printf("NO\n");

    return 0;
}
